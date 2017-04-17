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

// Typedef #0 from LocationInput in package org.genivi.navigation.navigationcore
union AddressValue {
  Int32 intValue;
  Double doubleValue;
  String stringValue;
  Coordinate3D coordinate3DValue;
  std::vector<UInt8> internalData;
  std::vector<RoadShield> roadShields;
};

// Typedef #1 from LocationInput in package org.genivi.navigation.navigationcore
enum class SearchStatus {
  SEARCHING = 193,
  FINISHED = 194,

};

// Typedef #2 from LocationInput in package org.genivi.navigation.navigationcore
enum class ValidationType {
  OK = 208,
  UNKNOWN = 209,
  AMBIGUOUS = 210,
  INCONSISTENT = 211,

};

// Typedef #3 from LocationInput in package org.genivi.navigation.navigationcore
enum class AddressAttribute {
  COUNTRY = 166,
  COUNTRYCODE = 179,
  STATE = 167,
  CITY = 168,
  STREET = 170,
  ROAD_NUMBER = 182,
  HOUSENUMBER = 171,
  HOUSENAME = 180,
  CROSSING = 172,
  DISTRICT = 173,
  PHONENUMBER = 174,
  POINAME = 175,
  TOWNCENTER = 176,
  LOCATION_INPUT = 177,
  FULL_ADDRESS = 178,
  POSTAL_CODE = 181,
  ROADSHIELDS = 182,

};

// Typedef #4 from LocationInput in package org.genivi.navigation.navigationcore
typedef std::vector<AddressAttribute> AddressAttributeList;
// Typedef #5 from LocationInput in package org.genivi.navigation.navigationcore
typedef std::map<AddressAttribute, AddressValue> Address;

// Typedef #6 from LocationInput in package org.genivi.navigation.navigationcore
typedef std::map<AddressAttribute, ValidationType> ValidationStatus;
