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
#include "franca_types.h"

// Typedef #0 from Configuration in package org.genivi.navigation.mapviewer
enum class Settings {
  UNITS_OF_MEASUREMENT = 48,
  LOCALE = 37,
  TIME_FORMAT = 3,
  COORDINATES_FORMAT = 6,

};

// Typedef #1 from Configuration in package org.genivi.navigation.mapviewer
enum class UnitsOfMeasurementAttribute {
  LENGTH = 49,

};

// Typedef #2 from Configuration in package org.genivi.navigation.mapviewer
enum class UnitsOfMeasurementValue {
  METER = 50,
  MILE = 51,
  KM = 52,
  YARD = 53,
  FOOT = 54,

};

// Typedef #3 from Configuration in package org.genivi.navigation.mapviewer
enum class CoordinatesFormat {
  INVALID = 0,
  DEGREES = 7,
  MINUTES = 8,
  SECONDS = 9,

};

// Typedef #4 from Configuration in package org.genivi.navigation.mapviewer
typedef std::vector<UnitsOfMeasurementValue> UnitsOfMeasurementListValue;
// Typedef #5 from Configuration in package org.genivi.navigation.mapviewer
typedef std::map<UnitsOfMeasurementAttribute, UnitsOfMeasurementValue>
    UnitsOfMeasurement;

// Typedef #6 from Configuration in package org.genivi.navigation.mapviewer
typedef std::map<UnitsOfMeasurementAttribute, UnitsOfMeasurementListValue>
    UnitsOfMeasurementList;
