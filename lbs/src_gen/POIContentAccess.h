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
#include "POIContentAccess.types.h"
#include "POIServiceTypes.types.h"

class POIContentAccess {
public:
  POIContentAccess();
  POIContentAccess(const POIContentAccess &c);
  POIContentAccess &operator=(const POIContentAccess &c);
  ~POIContentAccess();

  void registerContentAccessModule(String moduleName,
                                   ContentAccessModuleID &camId);

  void unRegisterContentAccessModule(ContentAccessModuleID camId);

  void registerPoiCategories(ContentAccessModuleID camId,
                             std::vector<CategoryID> poiCategories);

  void updateCategories(ContentAccessModuleID camId,
                        std::vector<CAMCategoryUpdate> poiCategories);

  void addCategories(ContentAccessModuleID camId,
                     std::vector<CAMCategory> poiCategories,
                     std::vector<CategoryID> &poiCategoriesId);

  void removeCategories(ContentAccessModuleID camId,
                        std::vector<CategoryID> poiCategories);

private:
  // none
};
