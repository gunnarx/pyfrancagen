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

#include "FreeTextSearch.h"

// Constructors, etc.
FreeTextSearch::FreeTextSearch() { /* TODO, or use implicit */
}

FreeTextSearch::FreeTextSearch(
    const FreeTextSearch &x) { /* TODO, or use implicit */
}

FreeTextSearch &FreeTextSearch::
operator=(const FreeTextSearch &x) { /* TODO, or use implicit */
}

FreeTextSearch::~FreeTextSearch() { /* TODO, or use implicit */
}

void FreeTextSearch::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void FreeTextSearch::ftsRequest(
    FtsString inputString, Coordinate2D searchLocation, ShapeList searchShapes,
    PageSize pageSize, SearchOptions searchOptions, FtsString searchConditions,
    FuzzyLevel fuzzyLevel, Handle &sessionHandle, PageId &pageId)
{
    /* Method body for ftsRequest here */

};

void FreeTextSearch::ftsNextPage(Handle sessionHandle,
                                 SearchOptions searchOptions, PageId &pageId)
{
    /* Method body for ftsNextPage here */

};

void FreeTextSearch::ftsCancel(Handle sessionHandle)
{
    /* Method body for ftsCancel here */

};

void FreeTextSearch::deleteLocationHandles(
    LocationHandleList locationHandleList)
{
    /* Method body for deleteLocationHandles here */

};
