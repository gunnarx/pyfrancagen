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

#include "POISearch.h"

// Constructors, etc.
POISearch::POISearch() { /* TODO, or use implicit */
}

POISearch::POISearch(const POISearch &x) { /* TODO, or use implicit */
}

POISearch &POISearch::
operator=(const POISearch &x) { /* TODO, or use implicit */
}

POISearch::~POISearch() { /* TODO, or use implicit */
}

void POISearch::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void POISearch::validateCategories(std::vector<CategoryID> categories,
                                   std::vector<CategoryAndStatus> &results)
{
    /* Method body for validateCategories here */

};

void POISearch::getAvailableCategories(
    std::vector<CategoryAndName> &categories)
{
    /* Method body for getAvailableCategories here */

};

void POISearch::getRootCategory(CategoryID &category)
{
    /* Method body for getRootCategory here */

};

void POISearch::getChildrenCategories(
    CategoryID category, std::vector<CategoryAndLevel> &categories)
{
    /* Method body for getChildrenCategories here */

};

void POISearch::getParentCategories(CategoryID category,
                                    std::vector<CategoryAndLevel> &categories)
{
    /* Method body for getParentCategories here */

};

void POISearch::getCategoriesWithStandardCategoryId(
    StandardCategory standardCategoryId, std::vector<CategoryID> &categories)
{
    /* Method body for getCategoriesWithStandardCategoryId here */

};

void POISearch::getCategoriesDetails(std::vector<CategoryID> categories,
                                     std::vector<Category> &results)
{
    /* Method body for getCategoriesDetails here */

};

void POISearch::createPoiSearchHandle(Handle &poiSearchHandle)
{
    /* Method body for createPoiSearchHandle here */

};

void POISearch::deletePoiSearchHandle(Handle poiSearchHandle)
{
    /* Method body for deletePoiSearchHandle here */

};

void POISearch::setCenter(Handle poiSearchHandle, Coordinate3D location)
{
    /* Method body for setCenter here */

};

void POISearch::setRouteHandle(Handle poiSearchHandle, Handle sessionHandle,
                               Handle routeHandle, UInt32 startSearchOffset,
                               UInt32 endSearchOffset)
{
    /* Method body for setRouteHandle here */

};

void POISearch::setCategories(Handle poiSearchHandle,
                              std::vector<CategoryAndRadius> poiCategories)
{
    /* Method body for setCategories here */

};

void POISearch::setAttributes(Handle poiSearchHandle,
                              std::vector<AttributeDetails> poiAttributes)
{
    /* Method body for setAttributes here */

};

void POISearch::startPoiSearch(Handle poiSearchHandle, String inputString,
                               SortOption sortOption)
{
    /* Method body for startPoiSearch here */

};

void POISearch::cancelPoiSearch(Handle poiSearchHandle)
{
    /* Method body for cancelPoiSearch here */

};

void POISearch::startPoiProximityAlert(Handle poiSearchHandle,
                                       String inputString,
                                       SortOption sortOption)
{
    /* Method body for startPoiProximityAlert here */

};

void POISearch::cancelPoiProximityAlert(Handle poiSearchHandle)
{
    /* Method body for cancelPoiProximityAlert here */

};

void POISearch::requestResultList(Handle poiSearchHandle, UInt16 offset,
                                  UInt16 maxWindowSize,
                                  std::vector<AttributeID> attributeList,
                                  SearchStatusState &statusValue,
                                  UInt16 &resultListSize,
                                  std::vector<SearchResult> &resultListWindow)
{
    /* Method body for requestResultList here */

};

void POISearch::getPoiDetails(std::vector<POI_ID> id,
                              std::vector<SearchResultDetails> &results)
{
    /* Method body for getPoiDetails here */

};
