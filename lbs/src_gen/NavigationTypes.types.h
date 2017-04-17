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

#include "franca_types.h"

// Typedef #0 from NavigationTypes in package org.genivi.navigation
struct Coordinate2D {
  Double latitude;
  Double longitude;
};

// Typedef #1 from NavigationTypes in package org.genivi.navigation
struct Coordinate3D {
  Double altitude;
};

// Typedef #2 from NavigationTypes in package org.genivi.navigation
struct Rectangle {
  Coordinate2D topLeft;
  Coordinate2D bottomRight;
};

// Typedef #3 from NavigationTypes in package org.genivi.navigation
typedef Int32 DistanceInMeters;

// Typedef #4 from NavigationTypes in package org.genivi.navigation
typedef UInt32 Handle;

// Typedef #5 from NavigationTypes in package org.genivi.navigation
struct Locale {
  String languageCode;
  String countryCode;
  String scriptCode;
};

// Typedef #6 from NavigationTypes in package org.genivi.navigation
enum class BasicEnum {
  INVALID = 0,
  ALL = 65535,

};

// Typedef #7 from NavigationTypes in package org.genivi.navigation
enum class TimeFormat {
  TWELVEH = 1,
  TWENTYFOURH = 2,

};

// Typedef #8 from NavigationTypes in package org.genivi.navigation
enum class SessionStatus {
  AVAILABLE = 1,
  NOT_AVAILABLE = 2,

};

// Typedef #9 from NavigationTypes in package org.genivi.navigation
enum class Units {
  METER = 50,
  MILE = 51,
  KM = 52,
  YARD = 53,
  FOOT = 54,

};

// Typedef #10 from NavigationTypes in package org.genivi.navigation
struct Session {
  Handle sessionHandle;
  String clientApp;
};

// Typedef #11 from NavigationTypes in package org.genivi.navigation
typedef Handle LocationHandle;

// Typedef #12 from NavigationTypes in package org.genivi.navigation
struct Circle {
  Coordinate2D center;
  DistanceInMeters radius;
};

// Typedef #13 from NavigationTypes in package org.genivi.navigation
typedef UInt64 Timestamp;

// Typedef #14 from NavigationTypes in package org.genivi.navigation
typedef std::vector<Coordinate2D> Polygon;