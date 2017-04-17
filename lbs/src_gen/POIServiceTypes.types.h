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
#include "POIServiceTypes.types.h"
#include "franca_types.h"

// Typedef #0 from POIServiceTypes in package org.genivi.navigation.poiservice
typedef UInt32 ResourceID;

// Typedef #1 from POIServiceTypes in package org.genivi.navigation.poiservice
union AttributeValue {
  Int32 intValue;
  String stringValue;
  Boolean boolValue;
};

// Typedef #2 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class OperatorType {
  MORE_THAN = 520,
  LESS_THAN = 521,
  EQUAL = 522,

};

// Typedef #3 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CategorySortOption {
  CategoryID id;
  String name;
};

// Typedef #4 from POIServiceTypes in package org.genivi.navigation.poiservice
union Media {
  std::vector<ResourceID> id;
  String url;
};

// Typedef #5 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class AttributeType {
  STRING = 500,
  INTEGER = 501,
  COORDINATES = 502,
  BOOLEAN = 503,

};

// Typedef #6 from POIServiceTypes in package org.genivi.navigation.poiservice
typedef UInt32 AttributeID;

// Typedef #7 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CategoryAndRadius {
  CategoryID id;
  UInt32 radius;
};

// Typedef #8 from POIServiceTypes in package org.genivi.navigation.poiservice
typedef UInt32 POI_ID;

// Typedef #9 from POIServiceTypes in package org.genivi.navigation.poiservice
struct PoiDetails {
  POI_ID id;
  String name;
  Coordinate3D location;
};

// Typedef #10 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class RouteStatus {
  OFF_ROUTE = 600,
  ON_ROUTE = 601,
  INSIDE_CORRIDOR = 602,

};

// Typedef #11 from POIServiceTypes in package org.genivi.navigation.poiservice
struct PoiAttribute {
  AttributeID id;
  AttributeType type;
  AttributeValue value;
};

// Typedef #12 from POIServiceTypes in package org.genivi.navigation.poiservice
struct AttributeDetails {
  AttributeID id;
  CategoryID categoryId;
  AttributeType type;
  AttributeValue value;
  OperatorType oper;
  Boolean mandatory;
};

// Typedef #13 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class StandardCategory {
  NOT_STANDARD_CATEGORY,
  VEHICLE_REPAIR = 1,
  PETROL_STATION = 2,
  EVS_CHARGING_STATION = 3,
  CONTROLLED_ACCESS_INTERSECTION = 4,
  CONTROLLED_ACCESS_ENTRY_EXIT = 5,
  CONTROLLED_ACCESS_SMART_IC = 6,
  RENT_A_CAR = 7,
  CAR_WASH = 8,
  CAR_DEALERSHIP = 9,
  MOTOR_CYCLE_DEALERSHIP = 10,
  TRUCK_DEALERSHIP = 11,
  PARKING_GARAGE = 12,
  OPEN_PARKING = 13,
  REST_AREA = 14,
  ROAD_ASSISTANCE = 15,
  CAMPING = 16,
  CARAVAN_SITE = 17,
  COACH_AND_LORRY_PARKING = 18,
  MOTORING_ORG_OFFICE = 19,
  CAR_SHIPPING_TERMINAL = 20,
  HOTEL_MOTEL = 21,
  RESTAURANT = 22,
  FAST_FOOD = 23,
  COFFEE_SHOP = 24,
  BAR_OR_PUB = 25,
  CINEMA = 26,
  MUSEUM = 27,
  THEATRE = 28,
  LIBRARY = 29,
  HOSPITAL = 30,
  PHYSICIAN = 31,
  DENTIST = 32,
  PHARMACY = 33,
  VETERINARIAN_SERVICE = 34,
  POLICE_STATION = 35,
  POST_OFFICE = 36,
  CITY_HALL = 37,
  EMBASSY = 38,
  COURT_HOUSE = 39,
  GOVERNMENT_OFFICE = 40,
  COMMUNITY_CENTER = 41,
  SHOPPING_CENTER = 42,
  STORE = 43,
  BANK = 44,
  ATM = 45,
  CURRENCY_EXCHANGE = 46,
  TOURIST_OFFICE = 47,
  TRAVEL_AGENCY = 48,
  TOURIST_ATTRACTION = 49,
  HISTORICAL_MONUMENT = 50,
  NATIONAL_PARK = 51,
  CITY_CENTER = 52,
  HAMLET = 53,
  ZOO = 54,
  AMUSEMENT_PARK = 55,
  GOING_OUT = 56,
  STADIUM = 57,
  SPORTS_CENTER = 58,
  RECREATION = 59,
  SKI_RESORT = 60,
  SWIMMING_POOL = 61,
  GOLF_COURSE = 62,
  FERRY_TERMINAL = 63,
  MARINA = 64,
  HARBOUR = 65,
  BUSINESS_FACILITY = 66,
  EXHIBITION_CONFERENCE_CENTER = 67,
  RAILWAY_STATION = 68,
  PUBLIC_TRANSIT_STOP = 69,
  PARK_AND_RIDE = 70,
  AIRPORT = 71,
  AIRLINE_ACCESS = 72,
  TAXI_STAND = 73,
  EMERGENCY_CALL_STATION = 74,
  EMERGENCY_MEDICAL_SERVICE = 75,
  FIRST_AID_POST = 76,
  FIRE_BRIGADE = 77,
  PLACE_OF_WORSHIP = 78,
  EDUCATION = 79,
  CUSTOMS = 80,
  FRONTIER_CROSSING = 81,
  TOLL_LOCATION = 82,
  PUBLIC_RESTROOM = 83,
  PUBLIC_PHONE = 84,
  KINDERGARTEN = 85,
  MOUNTAIN_PASS_SUMMIT = 86,
  SPEED_CAMERA = 87,

};

// Typedef #14 from POIServiceTypes in package org.genivi.navigation.poiservice
union Icon {
  std::vector<ResourceID> id;
  String url;
};

// Typedef #15 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CategoryAndLevel {
  CategoryID uniqueId;
  Boolean topLevel;
};

// Typedef #16 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CategoryAndName {
  CategoryID uniqueId;
  String name;
  Boolean topLevel;
};

// Typedef #17 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class UpdateReason {
  ADDED = 700,
  REMOVED = 701,
  ATTR_ADDED = 702,
  ATTR_MODIFIED = 703,
  ATTR_REMOVED = 704,

};

// Typedef #18 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CategoryAndStatus {
  CategoryID uniqueId;
  Boolean status;
};

// Typedef #19 from POIServiceTypes in package org.genivi.navigation.poiservice
struct PoiAddedDetails {
  String name;
  Coordinate3D location;
  std::vector<PoiAttribute> attributeList;
};

// Typedef #20 from POIServiceTypes in package org.genivi.navigation.poiservice
struct Details {
  std::vector<CategoryID> parentsId;
  Icon icons;
  String name;
  String shortDesc;
  Media media;
};

// Typedef #21 from POIServiceTypes in package org.genivi.navigation.poiservice
struct Operator {
  OperatorType type;
  String name;
  AttributeValue value;
};

// Typedef #22 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CategoryAttribute {
  AttributeID id;
  String name;
  AttributeType type;
  std::vector<Operator> operators;
};

// Typedef #23 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class CategoryIDSet {
  AIRPORT = 1,
  SPORTING = 2,
  FERRY_TERMINAL = 3,
  ENTERTAINMENT = 4,
  HOTEL_MOTEL = 5,
  RESTAURANT = 6,
  PARKING = 7,
  FUEL_STATION = 8,
  SERVICE_AREA = 9,
  CAR_REPAIR_SHOP = 10,
  CAR_DEALER = 11,
  CAR_RENTAL_AGENCY = 12,
  MEDICAL = 13,
  SHOPPING = 14,
  BUSINESS_AREA = 15,
  LANDMARK = 16,
  FLASH_RADAR = 17,
  POI_TRUCK = 18,
  SANCTUARY = 19,
  TOLLBOOTH = 20,
  KIOSK = 21,
  WATER_CLOSET = 22,
  BANK_AND_FINANCIAL = 23,
  TRAVEL = 24,
  TOURIST = 25,
  PUBLIC_BUILDING = 26,
  RAILWAY_STATION = 27,
  DESTINATION_FLAG = 204,
  FAVORITE = 205,
  FAVORITE_HOME = 206,
  FAVORITE_ADDRESSBOOK = 207,
  USER_IMPORT = 208,
  USER_CONTACT = 209,
  MOTORWAY_EXIT = 210,
  ALL_CATEGORIES = 65535,

};

// Typedef #24 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CategoryDetails {
  CategoryID uniqueId;
  StandardCategory standardCategoryId;
  std::vector<CategoryID> parentsId;
  Icon icons;
  String name;
  Boolean topLevel;
  String description;
  Media media;
};

// Typedef #25 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CAMCategory {
  Details details;
  std::vector<CategoryAttribute> attributeList;
  std::vector<CategorySortOption> sortOptions;
};

// Typedef #26 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class SearchStatusState {
  NOT_STARTED = 510,
  SEARCHING = 511,
  FINISHED = 512,

};

// Typedef #27 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CAMCategoryUpdate {
  CategoryID id;
  std::vector<CategoryAttribute> attributeList;
  std::vector<CategorySortOption> sortOptions;
};

// Typedef #28 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class SortOption {
  SORT_DEFAULT = 560,
  SORT_BY_DISTANCE = 561,
  SORT_BY_TIME = 562,
  ATTRIBUTE_CUSTOM = 563,

};

// Typedef #29 from POIServiceTypes in package org.genivi.navigation.poiservice
struct SearchResult {
  POI_ID id;
  UInt32 distance;
  RouteStatus routeStatus;
  std::vector<PoiAttribute> attributeList;
};

// Typedef #30 from POIServiceTypes in package org.genivi.navigation.poiservice
struct CategoryAndReason {
  CategoryID unique_id;
  UpdateReason reason;
};

// Typedef #31 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class ConfigurationChangedReason {
  LOCALES,

};

// Typedef #32 from POIServiceTypes in package org.genivi.navigation.poiservice
enum class Settings {
  INVALID = 0,
  UNITS_OF_MEASUREMENT = 48,
  LOCALE = 37,
  TIME_FORMAT = 3,
  COORDINATES_FORMAT = 6,

};

// Typedef #33 from POIServiceTypes in package org.genivi.navigation.poiservice
struct SearchResultDetails {
  PoiDetails details;
  std::vector<CategoryID> categories;
  std::vector<PoiAttribute> attributeList;
};

// Typedef #34 from POIServiceTypes in package org.genivi.navigation.poiservice
struct Category {
  CategoryDetails details;
  std::vector<CategoryAttribute> attributeList;
  std::vector<CategorySortOption> sortOptions;
};

// Typedef #35 from POIServiceTypes in package org.genivi.navigation.poiservice
struct PoiCAMDetails {
  POI_ID sourceId;
  String name;
  CategoryID category;
  Coordinate3D location;
  UInt16 distance;
  std::vector<PoiAttribute> attributeList;
};

// Typedef #36 from POIServiceTypes in package org.genivi.navigation.poiservice
typedef UInt8 ContentAccessModuleID;
