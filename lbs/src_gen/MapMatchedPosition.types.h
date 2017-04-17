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

// Typedef #0 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
enum class GnnsFixStatus {
  NO_FIX = 256,
  TIME_FIX = 257,
  FIX_2D = 258,
  FIX_3D = 259,

};

// Typedef #1 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
enum class MatchMode {
  MATCH_TYPE = 240,
  ON_ROAD = 241,
  OFF_ROAD = 242,
  ON_FERRY = 243,
  IN_TUNNEL = 244,
  ON_CARPARK = 245,

};

// Typedef #2 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
union PositionOnSegmentValue {
  Boolean directionOnSegment;
  Double distanceOnSegment;
  ByteBuffer segment;
  Timestamp timestamp;
};

// Typedef #3 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
union PositionStatusValue {
  Boolean statusValue;
  GnnsFixStatus fixStatus;
  Timestamp timestamp;
};

// Typedef #4 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
enum class PositionItemKey {
  HEADING = 163,
  SPEED = 164,
  CLIMB = 165,

};

// Typedef #5 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
enum class AddressItemKey {
  TIMEZONE_OFFSET = 17,
  DAYLIGHT_OFFSET = 18,
  COUNTRY = 166,
  STATE = 167,
  CITY = 168,
  STREET = 170,
  HOUSENUMBER = 171,
  CROSSING = 172,
  DISTRICT = 173,
  PHONENUMBER = 174,
  POINAME = 175,
  TOWNCENTER = 176,
  LOCATION_INPUT = 177,
  FULL_ADDRESS = 178,
  COUNTRYCODE = 179,
  HOUSENAME = 180,
  POSTAL_CODE = 181,
  ROAD_NUMBER = 334,
  MATCH_TYPE = 240,
  ROADSHIELDS = 182,

};

// Typedef #6 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
enum class PositionStatus {
  GNSS_FIX_STATUS = 224,
  DR_STATUS = 225,
  MM_STATUS = 226,
  SIMULATION_MODE = 227,

};

// Typedef #7 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
union AddressItemValue {
  String addressField;
  Int16 offset;
  Timestamp timestamp;
  MatchMode matchMode;
  std::vector<RoadShield> roadShields;
};

// Typedef #8 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
union PositionItemValue {
  Timestamp timestamp;
  Boolean status;
  GnnsFixStatus fix;
  Double doubleValue;
  Int32 intValue;
};

// Typedef #9 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
enum class PositionOnSegmentKey {
  SEGMENT_ID = 272,
  DIRECTION_ON_SEGMENT = 274,
  DISTANCE_ON_SEGMENT = 275,

};

// Typedef #10 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
enum class SimulationStatus {
  SIMULATION_STATUS_NO_SIMULATION = 544,
  SIMULATION_STATUS_RUNNING = 545,
  SIMULATION_STATUS_PAUSED = 546,
  SIMULATION_STATUS_FIXED_POSITION = 547,

};

// Typedef #11 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
typedef std::map<PositionItemKey, PositionItemValue> PositionItemDict;

// Typedef #12 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
typedef std::map<AddressItemKey, AddressItemValue> AddressItemDict;

// Typedef #13 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
typedef std::map<PositionOnSegmentKey, PositionOnSegmentValue>
    PositionOnSegmentDict;

// Typedef #14 from MapMatchedPosition in package
// org.genivi.navigation.navigationcore
typedef std::map<PositionStatus, PositionStatusValue> PositionStatusDict;
