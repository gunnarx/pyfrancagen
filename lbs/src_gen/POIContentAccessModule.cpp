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

#include "POIContentAccessModule.h"

// Constructors, etc.
POIContentAccessModule::POIContentAccessModule() { /* TODO, or use implicit */
}

POIContentAccessModule::POIContentAccessModule(
    const POIContentAccessModule &x) { /* TODO, or use implicit */
}

POIContentAccessModule &POIContentAccessModule::
operator=(const POIContentAccessModule &x) { /* TODO, or use implicit */
}

POIContentAccessModule::~POIContentAccessModule() { /* TODO, or use implicit */
}

void POIContentAccessModule::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void POIContentAccessModule::setLocale(String languageCode, String countryCode,
                                       String scriptCode)
{
    /* Method body for setLocale here */

};

void POIContentAccessModule::getLocale(String &languageCode,
                                       String &countryCode, String &scriptCode)
{
    /* Method body for getLocale here */

};

void POIContentAccessModule::getSupportedLocales(
    std::vector<Locale> &localeList)
{
    /* Method body for getSupportedLocales here */

};

void POIContentAccessModule::getAvailableCategories(
    std::vector<CategoryAndName> &categories)
{
    /* Method body for getAvailableCategories here */

};

void POIContentAccessModule::getRootCategory(CategoryID &category)
{
    /* Method body for getRootCategory here */

};

void POIContentAccessModule::getChildrenCategories(
    CategoryID category, std::vector<CategoryAndLevel> &categories)
{
    /* Method body for getChildrenCategories here */

};

void POIContentAccessModule::getParentCategories(
    CategoryID category, std::vector<CategoryAndLevel> &categories)
{
    /* Method body for getParentCategories here */

};

void POIContentAccessModule::createCategory(CAMCategory category,
                                            CategoryID &unique_id)
{
    /* Method body for createCategory here */

};

void POIContentAccessModule::removeCategories(
    std::vector<CategoryID> categories)
{
    /* Method body for removeCategories here */

};

void POIContentAccessModule::addPOIs(CategoryID unique_id,
                                     std::vector<PoiAddedDetails> poiList)
{
    /* Method body for addPOIs here */

};

void POIContentAccessModule::removePOIs(std::vector<POI_ID> ids)
{
    /* Method body for removePOIs here */

};

void POIContentAccessModule::poiSearchStarted(
    Handle poiSearchHandle, UInt16 maxSize, Coordinate3D location,
    std::vector<CategoryAndRadius> poiCategories,
    std::vector<AttributeDetails> poiAttributes, String inputString,
    SortOption sortOption)
{
    /* Method body for poiSearchStarted here */

};

void POIContentAccessModule::poiSearchCanceled(Handle poiSearchHandle)
{
    /* Method body for poiSearchCanceled here */

};

void POIContentAccessModule::resultListRequested(
    ContentAccessModuleID camId, Handle poiSearchHandle,
    std::vector<AttributeID> attributeList, SearchStatusState &statusValue,
    UInt16 &resultListSize, std::vector<PoiCAMDetails> &resultList)
{
    /* Method body for resultListRequested here */

};

void POIContentAccessModule::poiDetailsRequested(
    std::vector<POI_ID> source_id, std::vector<SearchResultDetails> &results)
{
    /* Method body for poiDetailsRequested here */

};
