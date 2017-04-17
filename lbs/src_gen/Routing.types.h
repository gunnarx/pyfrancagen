#pragma once
// Generated from Franca IDL Interface
// 2017-04-17 33:17

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

#include "CommonTypes.types.h"
#include "NavigationCoreTypes.types.h"
#include "NavigationTypes.types.h"
#include "franca_types.h"

// Typedef #0 from Routing in package org.genivi.navigation.navigationcore
enum class RoutePreferenceSource {
  FERRY = 368,
  TOLL_ROADS = 369,
  TUNNELS = 370,
  HIGHWAYS_MOTORWAYS = 371,
  VEHICLE_SIZE_LIMIT = 372,
  CRIME_AREAS = 373,

};

// Typedef #1 from Routing in package org.genivi.navigation.navigationcore
enum class PreferenceMode {
  PROHIBIT = 400,
  AVOID = 401,
  USE = 402,
  PREFER = 403,
  IGNORE = 404,

};

// Typedef #2 from Routing in package org.genivi.navigation.navigationcore
enum class WayPointType {
  HARD_POINT = 290,
  SOFT_POINT = 291,

};

// Typedef #3 from Routing in package org.genivi.navigation.navigationcore
struct BlockedRouteElement {
  UInt32 offset;
  UInt32 length;
};

// Typedef #4 from Routing in package org.genivi.navigation.navigationcore
union RouteOverviewItem {
  UInt32 uValue;
};

// Typedef #5 from Routing in package org.genivi.navigation.navigationcore
union WayPointItem {
  Double coordinateValue;
  WayPointType waypointValue;
  std::vector<UInt8> metaData;
};

// Typedef #6 from Routing in package org.genivi.navigation.navigationcore
struct IntermediatePoint {
  WayPointType type;
};

// Typedef #7 from Routing in package org.genivi.navigation.navigationcore
enum class CalculationStatus {
  CALCULATION_OK = 304,
  NO_POSITION = 305,

};

// Typedef #8 from Routing in package org.genivi.navigation.navigationcore
enum class CalculationError {
  UNMATCHED_POSITION = 306,
  UNREACHABLE_DESTINATION = 307,
  UNFULFILLED_PREFERENCE_MODE = 308,

};

// Typedef #9 from Routing in package org.genivi.navigation.navigationcore
enum class CostModel {
  FASTEST = 352,
  SHORTEST = 353,
  ECOLOGICAL = 354,
  SCENIC = 355,
  EASY = 356,
  OFF_ROAD = 357,
  BALANCED = 358,
  CHEAPEST = 359,

};

// Typedef #10 from Routing in package org.genivi.navigation.navigationcore
struct RoadPreference {
  PreferenceMode mode;
  RoutePreferenceSource source;
};

// Typedef #11 from Routing in package org.genivi.navigation.navigationcore
enum class TransportationMeans {
  BY_CAR = 384,
  ON_FOOT = 385,
  LONG_RANGE_TRAINS = 386,
  PUBLIC_TRANSPORTATION = 387,
  BY_BICYCLE = 388,
  BY_TRUCK = 389,

};

// Typedef #12 from Routing in package org.genivi.navigation.navigationcore
enum class Schedule {
  ARRIVAL_TIME = 394,
  ARRIVAL_DATE = 395,
  DEPARTURE_TIME = 396,
  DEPARTURE_DATE = 397,

};

// Typedef #13 from Routing in package org.genivi.navigation.navigationcore
enum class ConditionPreferenceSource {
  TRAFFIC_REALTIME = 512,

};

// Typedef #14 from Routing in package org.genivi.navigation.navigationcore
struct ConditionPreference {
  PreferenceMode mode;
  ConditionPreferenceSource source;
};

// Typedef #15 from Routing in package org.genivi.navigation.navigationcore
enum class TimeStampedEnum {
  TIMESTAMP = 16,

};

// Typedef #16 from Routing in package org.genivi.navigation.navigationcore
enum class GeoLocalizedEnum {
  LATITUDE = 160,
  LONGITUDE = 161,
  ALTITUDE = 162,

};

// Typedef #17 from Routing in package org.genivi.navigation.navigationcore
union RouteSegmentItem {
  Double doubleValue;
  std::vector<IntermediatePoint> intermediatePoints;
  String stringValue;
  std::vector<UInt8> linkId;
  Int32 int32Value;
  Int16 int16Value;
  UInt32 uInt32Value;
  UInt16 uInt16Value;
};

// Typedef #18 from Routing in package org.genivi.navigation.navigationcore
enum class RouteOverviewType {
  TOTAL_TIME = 398,
  TOTAL_DISTANCE = 399,

};

// Typedef #19 from Routing in package org.genivi.navigation.navigationcore
enum class WaypointElementType {
  LATITUDE = 160,
  LONGITUDE = 161,
  ALTITUDE = 162,
  LOCATION_INPUT = 17,
  WAYPOINT_TYPE = 289,

};

// Typedef #20 from Routing in package org.genivi.navigation.navigationcore
enum class RouteSegmentType {
  LINK_ID = 320,
  START_LATITUDE = 321,
  END_LATITUDE = 322,
  START_LONGITUDE = 323,
  END_LONGITUDE = 324,
  START_ALTITUDE = 325,
  END_ALTITUDE = 326,
  ROAD_NAME = 327,
  DISTANCE = 328,
  TIME = 329,
  MANEUVER = 330,
  INSTRUCTION = 331,
  BORDER_CROSSING = 332,
  ADDITIONAL_INFORMATION = 333,
  ROAD_NUMBER = 334,
  START_OFFSET = 335,
  INTERMEDIATE_POINTS = 288,
  HIGHWAY_EXIT = 116,
  SPEED = 164,
  TIME_ZONE,
  DAYLIGHT_SAVING_TIME,

};

// Typedef #21 from Routing in package org.genivi.navigation.navigationcore
typedef std::map<PreferenceMode, RoutePreferenceSource>
    UnfullfilledRoutePreference;

// Typedef #22 from Routing in package org.genivi.navigation.navigationcore
typedef std::map<Schedule, UInt32> RouteSchedule;

// Typedef #23 from Routing in package org.genivi.navigation.navigationcore
typedef std::map<RouteOverviewType, RouteOverviewItem> RouteOverview;

// Typedef #24 from Routing in package org.genivi.navigation.navigationcore
typedef std::map<WaypointElementType, WayPointItem> WayPoint;

// Typedef #25 from Routing in package org.genivi.navigation.navigationcore
typedef std::map<RouteSegmentType, RouteSegmentItem> RouteSegment;
