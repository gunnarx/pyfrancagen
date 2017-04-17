/*
 * SPDX-License-Identifier: MPL-2.0
 *
 * Copyright (C) 2014, PCA Peugeot Citroen, XS Embedded GmbH, TomTom
 * International B.V., Continental Automotive GmbH, BMW Car IT GmbH,
 * Alpine Electronics R&D Europe GmbH, AISIN AW CO., LTD.,  Neusoft
 * Technology Solutions GmbH, Jaguar Land Rover Limited,
 * Visteon Corporation, Elektrobit Automotive GmbH
 *
 * This Source Code Form is subject to the terms of the
 * Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
 * this file, you can obtain one at http://mozilla.org/MPL/2.0/.
*/
#pragma once
// Generated from Franca IDL Interface
// 2017-04-17 33:17

#include "CommonTypes.types.h"
#include "NavigationTypes.types.h"
#include "POIContentAccessModule.types.h"
#include "POIServiceTypes.types.h"

class POIContentAccessModule {
public:
  POIContentAccessModule();
  POIContentAccessModule(const POIContentAccessModule &c);
  POIContentAccessModule &operator=(const POIContentAccessModule &c);
  ~POIContentAccessModule();

  void getVersion(Version &interfaceversion);

  void setLocale(String languageCode, String countryCode, String scriptCode);

  void getLocale(String &languageCode, String &countryCode, String &scriptCode);

  void getSupportedLocales(std::vector<Locale> &localeList);

  void getAvailableCategories(std::vector<CategoryAndName> &categories);

  void getRootCategory(CategoryID &category);

  void getChildrenCategories(CategoryID category,
                             std::vector<CategoryAndLevel> &categories);

  void getParentCategories(CategoryID category,
                           std::vector<CategoryAndLevel> &categories);

  void createCategory(CAMCategory category, CategoryID &unique_id);

  void removeCategories(std::vector<CategoryID> categories);

  void addPOIs(CategoryID unique_id, std::vector<PoiAddedDetails> poiList);

  void removePOIs(std::vector<POI_ID> ids);

  void poiSearchStarted(Handle poiSearchHandle, UInt16 maxSize,
                        Coordinate3D location,
                        std::vector<CategoryAndRadius> poiCategories,
                        std::vector<AttributeDetails> poiAttributes,
                        String inputString, SortOption sortOption);

  void poiSearchCanceled(Handle poiSearchHandle);

  void resultListRequested(ContentAccessModuleID camId, Handle poiSearchHandle,
                           std::vector<AttributeID> attributeList,
                           SearchStatusState &statusValue,
                           UInt16 &resultListSize,
                           std::vector<PoiCAMDetails> &resultList);

  void poiDetailsRequested(std::vector<POI_ID> source_id,
                           std::vector<SearchResultDetails> &results);

private:
  // none
};
