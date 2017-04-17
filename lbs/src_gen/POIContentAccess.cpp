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
// Generated from Franca IDL Interface
// 2017-04-17 33:17

#include "POIContentAccess.h"

// Constructors, etc.
POIContentAccess::POIContentAccess() { /* TODO, or use implicit */
}

POIContentAccess::POIContentAccess(
    const POIContentAccess &x) { /* TODO, or use implicit */
}

POIContentAccess &POIContentAccess::
operator=(const POIContentAccess &x) { /* TODO, or use implicit */
}

POIContentAccess::~POIContentAccess() { /* TODO, or use implicit */
}

void POIContentAccess::registerContentAccessModule(
    String moduleName, ContentAccessModuleID &camId)
{
    /* Method body for registerContentAccessModule here */

};

void POIContentAccess::unRegisterContentAccessModule(
    ContentAccessModuleID camId)
{
    /* Method body for unRegisterContentAccessModule here */

};

void POIContentAccess::registerPoiCategories(
    ContentAccessModuleID camId, std::vector<CategoryID> poiCategories)
{
    /* Method body for registerPoiCategories here */

};

void POIContentAccess::updateCategories(
    ContentAccessModuleID camId, std::vector<CAMCategoryUpdate> poiCategories)
{
    /* Method body for updateCategories here */

};

void POIContentAccess::addCategories(ContentAccessModuleID camId,
                                     std::vector<CAMCategory> poiCategories,
                                     std::vector<CategoryID> &poiCategoriesId)
{
    /* Method body for addCategories here */

};

void POIContentAccess::removeCategories(ContentAccessModuleID camId,
                                        std::vector<CategoryID> poiCategories)
{
    /* Method body for removeCategories here */

};
