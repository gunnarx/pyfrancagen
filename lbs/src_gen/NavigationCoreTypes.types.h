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

// Typedef #0 from NavigationCoreTypes in package
// org.genivi.navigation.navigationcore
enum class RoadShieldAffixType {
  NONE = 700,
  NORTH = 701,
  EAST = 702,
  SOUTH = 703,
  WEST = 704,
  ALTERNATE = 705,
  BYPASS = 706,
  BUSINESS_LOOP = 707,
  BUSINESS_ROUTE = 708,
  BUSINESS_SPUR = 709,
  EXTENDED = 710,
  COLLECTOR = 711,
  EXPRESS = 712,

};

// Typedef #1 from NavigationCoreTypes in package
// org.genivi.navigation.navigationcore
struct RoadShieldAffix {
  RoadShieldAffixType affixType;
  String affixContent;
};

// Typedef #2 from NavigationCoreTypes in package
// org.genivi.navigation.navigationcore
enum class TimeStampedEnum {
  TIMESTAMP = 16,

};

// Typedef #3 from NavigationCoreTypes in package
// org.genivi.navigation.navigationcore
enum class GeoLocalizedEnum {
  LATITUDE = 160,
  LONGITUDE = 161,
  ALTITUDE = 162,

};

// Typedef #4 from NavigationCoreTypes in package
// org.genivi.navigation.navigationcore
struct RoadShield {
  String roadNumber;
  std::vector<RoadShieldAffix> affixes;
  String iconSetId;
};
