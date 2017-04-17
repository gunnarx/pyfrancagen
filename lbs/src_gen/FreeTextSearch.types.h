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

// Typedef #0 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
struct RouteCorridor {
  Handle routeHandle;
  DistanceInMeters startOffset;
  DistanceInMeters corridorWidth;
  DistanceInMeters corridorLength;
};

// Typedef #1 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef String FtsString;

// Typedef #2 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
enum class PlaceType {
  OTHER = 0,
  SETTLEMENT = 1,

};

// Typedef #3 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
struct MapCodeDetails {
  FtsString closestStreetName;
};

// Typedef #4 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
struct PoliticalDivisionDetails {
  Rectangle boundingBox;
};

// Typedef #5 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
struct CoordinatesDetails {
  FtsString closestStreetName;
};

// Typedef #6 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
struct PlaceDetails {
  PlaceType placeType;
  FtsString placeName;
  Rectangle placeBoundingBox;
};

// Typedef #7 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef UInt32 LocationHandle;

// Typedef #8 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef UInt16 Score;

// Typedef #9 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
union Shape {
  Circle circle;
  Rectangle rectangle;
  RouteCorridor routeCorridor;
};

// Typedef #10 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
struct StreetDetails {
  FtsString streetName;
  FtsString houseNumber;
  FtsString houseNumberFromInput;
};

// Typedef #11 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
enum class FtsRangeConstants {
  MAX_FUZZY_LEVEL = 5,
  MAX_SHAPES = 31,
  MAX_STRING_LIST_SIZE = 100,
  MAX_RESULTS = 500,
  MAX_STRING_LENGTH = 4095,
  MAX_LOCATION_HANDLES_LIST_SIZE = 4096,

};

// Typedef #12 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef UInt32 POICategoryCode;

// Typedef #13 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
enum class FtsStatus {
  OK = 0,
  ABORTED = 1,
  PREFIX_TOO_SHORT = 2,
  INTERNAL_ERROR = 3,
  INDEX_MISSING = 4,
  BAD_VERSION = 5,
  INVALID_PARAMETER_QUERY = 6,
  INVALID_PARAMETER_SEARCH_LOCATION = 7,
  INVALID_PARAMETER_PAGE_SIZE = 8,
  INVALID_PARAMETER_SEARCH_OPTIONS = 9,
  INVALID_PARAMETER_SEARCH_CONDITIONS = 10,
  INVALID_PARAMETER_SEARCH_SHAPES = 11,
  INVALID_PARAMETER_FUZZY_LEVEL = 12,
  INVALID_COORDINATES_INPUT = 13,

};

// Typedef #14 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
union AddressDetails {
  StreetDetails streetDetails;
  PlaceDetails placeDetails;
  MapCodeDetails mapCodeDetails;
  PoliticalDivisionDetails politicalDivisionDetails;
  CoordinatesDetails coordinatesDetails;
};

// Typedef #15 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef Int32 PageId;

// Typedef #16 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef std::vector<FtsString> FtsStringList;
// Typedef #17 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef UInt16 PageSize;

// Typedef #18 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef UInt32 SearchOptions;

// Typedef #19 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
struct POI {
  LocationHandle locationHandle;
  POICategoryCode categoryCode;
  FtsStringList brandNames;
  FtsString poiName;
  FtsString address;
  FtsStringList place;
  FtsStringList postalCode;
  FtsString mapCode;
  FtsString countryCode;
  FtsString stateCode;
  FtsString telephone;
  Coordinate2D coordinate;
  DistanceInMeters distance;
  Score score;
  Boolean fuzzyMatch;
  Boolean hasParents;
  Boolean hasChildren;
  DistanceInMeters detourDistance;
  Int32 detourTime;
};

// Typedef #20 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
struct Address {
  LocationHandle locationHandle;
  FtsString countryCode;
  FtsString stateCode;
  FtsStringList places;
  FtsStringList postalCodes;
  FtsString mapCode;
  AddressDetails addressDetails;
  Coordinate2D coordinate;
  DistanceInMeters distance;
  Score score;
  Boolean fuzzyMatch;
};

// Typedef #21 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
enum class SearchOption {
  ADDRESS = 1,
  POI = 2,
  POI_SUGGESTION = 4,
  NO_PLACES = 65536,
  NO_STREETS = 131072,
  NO_POI_CATEGORY_ASSUMPTIONS = 262144,
  NO_POLITICAL_DIVISIONS = 524288,
  POI_INDICATE_LINKS = 1048576,

};

// Typedef #22 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef Int8 FuzzyLevel;

// Typedef #23 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef std::vector<Address> Addresses;
// Typedef #24 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef std::vector<Shape> ShapeList;
// Typedef #25 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef std::vector<LocationHandle> LocationHandleList;
// Typedef #26 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
struct POICategory {
  POICategoryCode categoryCode;
  FtsString categoryName;
  FtsString matchedName;
  FtsString searchTextSuggestion;
  Addresses nearAddressSuggestions;
  Score score;
};

// Typedef #27 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef std::vector<POI> POIs;
// Typedef #28 from FreeTextSearch in package
// org.genivi.navigation.freetextsearchservice
typedef std::vector<POICategory> POICategories;