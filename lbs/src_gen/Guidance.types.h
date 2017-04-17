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

// Typedef #0 from Guidance in package org.genivi.navigation.navigationcore
enum class LaneType {
  LANE_INFO_BITMASK_STRAIGHT = 1,
  LANE_INFO_BITMASK_SLIGHTRIGHT = 2,
  LANE_INFO_BITMASK_RIGHT = 4,
  LANE_INFO_BITMASK_SHARPRIGHT = 8,
  LANE_INFO_BITMASK_RIGHTUTURN = 16,
  LANE_INFO_BITMASK_SLIGHTLEFT = 32,
  LANE_INFO_BITMASK_LEFT = 64,
  LANE_INFO_BITMASK_SHARPLEFT = 128,
  LANE_INFO_BITMASK_LEFTUTURN = 256,

};

// Typedef #1 from Guidance in package org.genivi.navigation.navigationcore
enum class Side {
  LEFT = 128,
  RIGHT = 131,
  NOT_AVAILABLE = 2,

};

// Typedef #2 from Guidance in package org.genivi.navigation.navigationcore
enum class ManeuverType {
  STRAIGHT_ON = 112,
  CROSSROAD = 113,
  ROUNDABOUT = 114,
  HIGHWAY_ENTER = 115,
  HIGHWAY_EXIT = 116,
  FOLLOW_SPECIFIC_LANE = 117,
  DESTINATION = 118,
  WAYPOINT = 119,
  TURN = 120,
  BIFURCATION = 121,

};

// Typedef #3 from Guidance in package org.genivi.navigation.navigationcore
enum class ManeuverDirectionType {
  DIRECTION = 576,
  EXIT_NUMBER = 577,
  ROAD_FORM = 578,
  LANE_INFO = 579,

};

// Typedef #4 from Guidance in package org.genivi.navigation.navigationcore
enum class LaneDivider {
  DIVIDER_UNDEFINED = 592,
  DIVIDER_INTERRUPTEDLONG = 593,
  DIVIDER_INTERRUPTEDSHORT = 594,
  DIVIDER_SOLIDSINGLE = 595,
  DIVIDER_SOLIDDOUBLE = 596,
  DIVIDER_SOLIDINTERRUPTED = 597,
  DIVIDER_INTERRUPTEDSOLID = 598,

};

// Typedef #5 from Guidance in package org.genivi.navigation.navigationcore
struct WaypointStruct {
  UInt32 waypointOffset;
  UInt32 travelTime;
  Int32 direction;
  Side side;
  Int16 timeZone;
  Int16 daylightSavingTime;
  Boolean isDestination;
  UInt16 number;
};

// Typedef #6 from Guidance in package org.genivi.navigation.navigationcore
enum class ManeuverDirection {
  STRAIGHT = 127,
  LEFT = 128,
  SLIGHT_LEFT = 129,
  HARD_LEFT = 130,
  RIGHT = 131,
  SLIGHT_RIGHT = 132,
  HARD_RIGHT = 133,
  UTURN_RIGHT = 134,
  UTURN_LEFT = 135,

};

// Typedef #7 from Guidance in package org.genivi.navigation.navigationcore
enum class PromptMode {
  DISABLED_PROMPT = 65,
  AUTOMATIC_PROMPT = 66,
  MANUAL_PROMPT = 67,

};

// Typedef #8 from Guidance in package org.genivi.navigation.navigationcore
enum class ManeuverPhase {
  CRUISE = 80,
  MANEUVER_APPEARED = 81,
  PRE_ADVICE = 82,
  ADVICE = 83,
  PASSED = 84,

};

// Typedef #9 from Guidance in package org.genivi.navigation.navigationcore
enum class GuidanceStatus {
  ACTIVE = 96,
  INACTIVE = 97,

};

// Typedef #10 from Guidance in package org.genivi.navigation.navigationcore
enum class RoadProperty {
  DEFAULT = 65534,
  TOLL_ROADS = 369,

};

// Typedef #11 from Guidance in package org.genivi.navigation.navigationcore
struct LaneInfo {
  UInt32 laneIndex;
  ByteBuffer laneDirections;
  LaneType directionToFollow;
  LaneDivider divider;
};

// Typedef #12 from Guidance in package org.genivi.navigation.navigationcore
enum class CalculationMode {
  ALL_MANUAL = 144,
  ALL_AUTOMATIC = 145,
  TRAFFIC_MANUAL = 146,
  OFF_ROUTE_MANUAL = 147,

};

// Typedef #13 from Guidance in package org.genivi.navigation.navigationcore
enum class RoadForm {
  ROAD_REGULAR = 561,
  ROAD_HIGHWAY_MOTORWAY = 562,
  ROAD_FERRY = 563,

};

// Typedef #14 from Guidance in package org.genivi.navigation.navigationcore
enum class RouteChangedCause {
  TRAFFIC = 528,
  OFF_ROUTE = 529,
  MANUAL = 530,

};

// Typedef #15 from Guidance in package org.genivi.navigation.navigationcore
union ManeuverDataValue {
  ManeuverDirection enumValue;
  UInt16 uint16Value;
  String stringValue;
  RoadForm roadFormValue;
  std::vector<LaneInfo> laneInfoValue;
  Coordinate3D coordinate3DValue;
};

// Typedef #16 from Guidance in package org.genivi.navigation.navigationcore
enum class ManeuverDataAttribute {
  LENGTH = 608,
  DIRECTION = 576,
  EXIT_NUMBER = 577,
  ROAD_FORM = 578,
  LANE_INFO = 579,
  COORDINATE = 613,

};

// Typedef #17 from Guidance in package org.genivi.navigation.navigationcore
typedef std::map<ManeuverDataAttribute, ManeuverDataValue> ManeuverData;

// Typedef #18 from Guidance in package org.genivi.navigation.navigationcore
struct ManeuverItem {
  UInt32 offsetOfManeuver;
  UInt32 travelTime;
  ManeuverDirectionType direction;
  ManeuverType maneuver;
  ManeuverData maneuverData;
};

// Typedef #19 from Guidance in package org.genivi.navigation.navigationcore
struct Maneuver {
  std::vector<RoadShield> roadShieldsAfterManeuver;
  String countryCodeAfterManeuver;
  String stateCodeAfterManeuver;
  String roadNumberAfterManeuver;
  String roadNameAfterManeuver;
  RoadProperty roadPropertyAfterManeuver;
  Side drivingSide;
  UInt32 offsetOfNextManeuver;
  std::vector<ManeuverItem> items;
};
