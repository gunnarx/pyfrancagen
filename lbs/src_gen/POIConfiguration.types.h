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
#include "NavigationTypes.types.h"
#include "POIServiceTypes.types.h"
#include "franca_types.h"

// Typedef #0 from POIConfiguration in package org.genivi.navigation.poiservice
enum class UnitsOfMeasurementAttribute {
  INVALID = 0,
  LENGTH = 49,

};

// Typedef #1 from POIConfiguration in package org.genivi.navigation.poiservice
enum class UnitsOfMeasurementValue {
  METER = 50,
  MILE = 51,
  KM = 52,
  YARD = 53,
  FOOT = 54,

};

// Typedef #2 from POIConfiguration in package org.genivi.navigation.poiservice
enum class Units {
  METER = 50,
  MILE = 51,
  KM = 52,
  YARD = 53,
  FOOT = 54,

};

// Typedef #3 from POIConfiguration in package org.genivi.navigation.poiservice
enum class TimeFormat {
  INVALID = 0,
  TWELVEH = 1,
  TWENTYFOURH = 2,

};

// Typedef #4 from POIConfiguration in package org.genivi.navigation.poiservice
enum class CoordinatesFormat {
  INVALID = 0,
  DEGREES = 1,
  MINUTES = 2,
  SECONDS = 3,

};

// Typedef #5 from POIConfiguration in package org.genivi.navigation.poiservice
typedef std::vector<UnitsOfMeasurementValue> UnitsOfMeasurementListValue;
// Typedef #6 from POIConfiguration in package org.genivi.navigation.poiservice
typedef std::map<UnitsOfMeasurementAttribute, UnitsOfMeasurementValue>
    UnitsOfMeasurement;

// Typedef #7 from POIConfiguration in package org.genivi.navigation.poiservice
typedef std::map<UnitsOfMeasurementAttribute, UnitsOfMeasurementListValue>
    UnitsOfMeasurementList;
