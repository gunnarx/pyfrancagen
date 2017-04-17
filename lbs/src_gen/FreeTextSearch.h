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
#include "FreeTextSearch.types.h"
#include "NavigationTypes.types.h"

class FreeTextSearch {
public:
  FreeTextSearch();
  FreeTextSearch(const FreeTextSearch &c);
  FreeTextSearch &operator=(const FreeTextSearch &c);
  ~FreeTextSearch();

  void getVersion(Version &interfaceversion);

  void ftsRequest(FtsString inputString, Coordinate2D searchLocation,
                  ShapeList searchShapes, PageSize pageSize,
                  SearchOptions searchOptions, FtsString searchConditions,
                  FuzzyLevel fuzzyLevel, Handle &sessionHandle, PageId &pageId);

  void ftsNextPage(Handle sessionHandle, SearchOptions searchOptions,
                   PageId &pageId);

  void ftsCancel(Handle sessionHandle);

  void deleteLocationHandles(LocationHandleList locationHandleList);

private:
  // none
};
