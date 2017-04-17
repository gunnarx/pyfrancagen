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

#include "Routing.h"

// Constructors, etc.
Routing::Routing() { /* TODO, or use implicit */
}

Routing::Routing(const Routing &x) { /* TODO, or use implicit */
}

Routing &Routing::operator=(const Routing &x) { /* TODO, or use implicit */
}

Routing::~Routing() { /* TODO, or use implicit */
}

void Routing::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void Routing::createRoute(Handle sessionHandle, Handle &routeHandle)
{
    /* Method body for createRoute here */

};

void Routing::deleteRoute(Handle sessionHandle, Handle routeHandle)
{
    /* Method body for deleteRoute here */

};

void Routing::setCostModel(Handle sessionHandle, Handle routeHandle,
                           CostModel costModel)
{
    /* Method body for setCostModel here */

};

void Routing::getCostModel(Handle routeHandle, CostModel &costModel)
{
    /* Method body for getCostModel here */

};

void Routing::getSupportedCostModels(std::vector<CostModel> &costModelsList)
{
    /* Method body for getSupportedCostModels here */

};

void Routing::setRoutePreferences(
    Handle sessionHandle, Handle routeHandle, String countryCode,
    std::vector<RoadPreference> roadPreferenceList,
    std::vector<ConditionPreference> conditionPreferenceList)
{
    /* Method body for setRoutePreferences here */

};

void Routing::getRoutePreferences(
    Handle routeHandle, String countryCode,
    std::vector<RoadPreference> &roadPreferenceList,
    std::vector<ConditionPreference> &conditionPreferenceList)
{
    /* Method body for getRoutePreferences here */

};

void Routing::getSupportedRoutePreferences(
    std::vector<RoadPreference> &routePreferencesList,
    std::vector<ConditionPreference> &conditionPreferenceList)
{
    /* Method body for getSupportedRoutePreferences here */

};

void Routing::setRouteSchedule(Handle sessionHandle, Handle routeHandle,
                               RouteSchedule routeSchedule)
{
    /* Method body for setRouteSchedule here */

};

void Routing::getRouteSchedule(Handle routeHandle,
                               std::vector<Schedule> valuesToReturn,
                               RouteSchedule &routeSchedule)
{
    /* Method body for getRouteSchedule here */

};

void Routing::setTransportationMeans(
    Handle sessionHandle, Handle routeHandle,
    std::vector<TransportationMeans> transportationMeansList)
{
    /* Method body for setTransportationMeans here */

};

void Routing::getTransportationMeans(
    Handle routeHandle,
    std::vector<TransportationMeans> &transportationMeansList)
{
    /* Method body for getTransportationMeans here */

};

void Routing::getSupportedTransportationMeans(
    std::vector<TransportationMeans> &transportationMeansList)
{
    /* Method body for getSupportedTransportationMeans here */

};

void Routing::setExcludedAreas(Handle sessionHandle, Handle routeHandle,
                               std::vector<Polygon> excludedAreas)
{
    /* Method body for setExcludedAreas here */

};

void Routing::getExcludedAreas(Handle routeHandle,
                               std::vector<Polygon> &excludedAreas)
{
    /* Method body for getExcludedAreas here */

};

void Routing::setWaypoints(Handle sessionHandle, Handle routeHandle,
                           Boolean startFromCurrentPosition,
                           std::vector<WayPoint> waypointsList)
{
    /* Method body for setWaypoints here */

};

void Routing::getWaypoints(Handle routeHandle,
                           Boolean &startFromCurrentPosition,
                           std::vector<WayPoint> &waypointsList)
{
    /* Method body for getWaypoints here */

};

void Routing::calculateRoute(Handle sessionHandle, Handle routeHandle)
{
    /* Method body for calculateRoute here */

};

void Routing::cancelRouteCalculation(Handle sessionHandle, Handle routeHandle)
{
    /* Method body for cancelRouteCalculation here */

};

void Routing::calculateAlternativeRoutes(
    Handle sessionHandle, Handle calculatedRoute,
    UInt16 numberOfAlternativeRoutes,
    std::vector<Handle> &alternativeRoutesList)
{
    /* Method body for calculateAlternativeRoutes here */

};

void Routing::getRouteSegments(Handle routeHandle, Int16 detailLevel,
                               std::vector<RouteSegmentType> valuesToReturn,
                               UInt32 numberOfSegments, UInt32 offset,
                               UInt32 &totalNumberOfSegments,
                               std::vector<RouteSegment> &routeSegments)
{
    /* Method body for getRouteSegments here */

};

void Routing::getRouteOverview(Handle routeHandle,
                               std::vector<RouteOverviewType> valuesToReturn,
                               RouteOverview &routeOverview)
{
    /* Method body for getRouteOverview here */

};

void Routing::getRouteBoundingBox(Handle routeHandle, Rectangle &boundingBox)
{
    /* Method body for getRouteBoundingBox here */

};

void Routing::getAllRoutes(std::vector<Handle> &routesList)
{
    /* Method body for getAllRoutes here */

};

void Routing::setBlockedRouteStretches(
    Handle sessionHandle, Handle routeHandle,
    std::vector<BlockedRouteElement> blockParameters)
{
    /* Method body for setBlockedRouteStretches here */

};

void Routing::getBlockedRouteStretches(
    Handle routeHandle, std::vector<BlockedRouteElement> &blockParameters)
{
    /* Method body for getBlockedRouteStretches here */

};
