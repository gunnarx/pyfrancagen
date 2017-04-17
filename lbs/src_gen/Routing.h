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
#include "NavigationCoreTypes.types.h"
#include "NavigationTypes.types.h"
#include "Routing.types.h"

class Routing {
public:
  Routing();
  Routing(const Routing &c);
  Routing &operator=(const Routing &c);
  ~Routing();

  void getVersion(Version &interfaceversion);

  void createRoute(Handle sessionHandle, Handle &routeHandle);

  void deleteRoute(Handle sessionHandle, Handle routeHandle);

  void setCostModel(Handle sessionHandle, Handle routeHandle,
                    CostModel costModel);

  void getCostModel(Handle routeHandle, CostModel &costModel);

  void getSupportedCostModels(std::vector<CostModel> &costModelsList);

  void
  setRoutePreferences(Handle sessionHandle, Handle routeHandle,
                      String countryCode,
                      std::vector<RoadPreference> roadPreferenceList,
                      std::vector<ConditionPreference> conditionPreferenceList);

  void getRoutePreferences(
      Handle routeHandle, String countryCode,
      std::vector<RoadPreference> &roadPreferenceList,
      std::vector<ConditionPreference> &conditionPreferenceList);

  void getSupportedRoutePreferences(
      std::vector<RoadPreference> &routePreferencesList,
      std::vector<ConditionPreference> &conditionPreferenceList);

  void setRouteSchedule(Handle sessionHandle, Handle routeHandle,
                        RouteSchedule routeSchedule);

  void getRouteSchedule(Handle routeHandle,
                        std::vector<Schedule> valuesToReturn,
                        RouteSchedule &routeSchedule);

  void setTransportationMeans(
      Handle sessionHandle, Handle routeHandle,
      std::vector<TransportationMeans> transportationMeansList);

  void getTransportationMeans(
      Handle routeHandle,
      std::vector<TransportationMeans> &transportationMeansList);

  void getSupportedTransportationMeans(
      std::vector<TransportationMeans> &transportationMeansList);

  void setExcludedAreas(Handle sessionHandle, Handle routeHandle,
                        std::vector<Polygon> excludedAreas);

  void getExcludedAreas(Handle routeHandle,
                        std::vector<Polygon> &excludedAreas);

  void setWaypoints(Handle sessionHandle, Handle routeHandle,
                    Boolean startFromCurrentPosition,
                    std::vector<WayPoint> waypointsList);

  void getWaypoints(Handle routeHandle, Boolean &startFromCurrentPosition,
                    std::vector<WayPoint> &waypointsList);

  void calculateRoute(Handle sessionHandle, Handle routeHandle);

  void cancelRouteCalculation(Handle sessionHandle, Handle routeHandle);

  void calculateAlternativeRoutes(Handle sessionHandle, Handle calculatedRoute,
                                  UInt16 numberOfAlternativeRoutes,
                                  std::vector<Handle> &alternativeRoutesList);

  void getRouteSegments(Handle routeHandle, Int16 detailLevel,
                        std::vector<RouteSegmentType> valuesToReturn,
                        UInt32 numberOfSegments, UInt32 offset,
                        UInt32 &totalNumberOfSegments,
                        std::vector<RouteSegment> &routeSegments);

  void getRouteOverview(Handle routeHandle,
                        std::vector<RouteOverviewType> valuesToReturn,
                        RouteOverview &routeOverview);

  void getRouteBoundingBox(Handle routeHandle, Rectangle &boundingBox);

  void getAllRoutes(std::vector<Handle> &routesList);

  void
  setBlockedRouteStretches(Handle sessionHandle, Handle routeHandle,
                           std::vector<BlockedRouteElement> blockParameters);

  void
  getBlockedRouteStretches(Handle routeHandle,
                           std::vector<BlockedRouteElement> &blockParameters);

private:
  // none
};
