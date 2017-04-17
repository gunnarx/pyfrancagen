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
#include "POISearch.types.h"
#include "POIServiceTypes.types.h"

class POISearch {
public:
  POISearch();
  POISearch(const POISearch &c);
  POISearch &operator=(const POISearch &c);
  ~POISearch();

  void getVersion(Version &interfaceversion);

  void validateCategories(std::vector<CategoryID> categories,
                          std::vector<CategoryAndStatus> &results);

  void getAvailableCategories(std::vector<CategoryAndName> &categories);

  void getRootCategory(CategoryID &category);

  void getChildrenCategories(CategoryID category,
                             std::vector<CategoryAndLevel> &categories);

  void getParentCategories(CategoryID category,
                           std::vector<CategoryAndLevel> &categories);

  void getCategoriesWithStandardCategoryId(StandardCategory standardCategoryId,
                                           std::vector<CategoryID> &categories);

  void getCategoriesDetails(std::vector<CategoryID> categories,
                            std::vector<Category> &results);

  void createPoiSearchHandle(Handle &poiSearchHandle);

  void deletePoiSearchHandle(Handle poiSearchHandle);

  void setCenter(Handle poiSearchHandle, Coordinate3D location);

  void setRouteHandle(Handle poiSearchHandle, Handle sessionHandle,
                      Handle routeHandle, UInt32 startSearchOffset,
                      UInt32 endSearchOffset);

  void setCategories(Handle poiSearchHandle,
                     std::vector<CategoryAndRadius> poiCategories);

  void setAttributes(Handle poiSearchHandle,
                     std::vector<AttributeDetails> poiAttributes);

  void startPoiSearch(Handle poiSearchHandle, String inputString,
                      SortOption sortOption);

  void cancelPoiSearch(Handle poiSearchHandle);

  void startPoiProximityAlert(Handle poiSearchHandle, String inputString,
                              SortOption sortOption);

  void cancelPoiProximityAlert(Handle poiSearchHandle);

  void requestResultList(Handle poiSearchHandle, UInt16 offset,
                         UInt16 maxWindowSize,
                         std::vector<AttributeID> attributeList,
                         SearchStatusState &statusValue, UInt16 &resultListSize,
                         std::vector<SearchResult> &resultListWindow);

  void getPoiDetails(std::vector<POI_ID> id,
                     std::vector<SearchResultDetails> &results);

private:
  // none
};
