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

// Typedef #0 from MapViewerControl in package org.genivi.navigation.mapviewer
struct Dimension {
  UInt16 horizontalSize;
  UInt16 verticalSize;
};

// Typedef #1 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class MapScaleUnit {
  METER = 50,
  MILE = 51,
  KM = 52,
  YARD = 53,
  FOOT = 54,

};

// Typedef #2 from MapViewerControl in package org.genivi.navigation.mapviewer
struct MapViewArea {
  Double left;
  Double right;
  Double top;
  Double bottom;
};

// Typedef #3 from MapViewerControl in package org.genivi.navigation.mapviewer
struct Pixel {
  UInt16 x;
  UInt16 y;
};

// Typedef #4 from MapViewerControl in package org.genivi.navigation.mapviewer
struct DisplayedRoute {
  Handle routeHandle;
  Boolean highlighted;
};

// Typedef #5 from MapViewerControl in package org.genivi.navigation.mapviewer
struct CategoryVisibility {
  CategoryID poiCategoryId;
  Boolean visible;
  UInt8 minScaleID;
  UInt8 maxScaleID;
};

// Typedef #6 from MapViewerControl in package org.genivi.navigation.mapviewer
struct AnchorPoint {
  Int16 x;
  Int16 y;
};

// Typedef #7 from MapViewerControl in package org.genivi.navigation.mapviewer
struct CustomElement {
  String name;
  String iconUri;
  Coordinate2D coordinate;
  AnchorPoint elem4;
};

// Typedef #8 from MapViewerControl in package org.genivi.navigation.mapviewer
struct WayPointValue {
  Handle routeHandle;
  UInt16 waypointIndex;
};

// Typedef #9 from MapViewerControl in package org.genivi.navigation.mapviewer
union ElementValue {
  Int32 trafficIncident;
  Handle handle;
  CustomElement element;
  WayPointValue wayPointValue;
};

// Typedef #10 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class SelectableMapType {
  MET_POI = 2,
  MET_POLYGON = 3,
  MET_EDGE = 4,
  MET_ROAD = 5,
  MET_ROAD_ICON = 6,
  MET_TTI_ICON = 7,
  MET_TTI_EDGE = 8,
  MET_CITY_MARKER = 9,
  MET_ROUTE = 10,
  MET_TREKKING_ROUTE = 11,
  MET_POSITION = 12,
  MET_LANDMARK = 13,
  MET_DESTINATION = 14,
  MET_FAVORITE = 15,
  MET_PICTURE = 16,
  MET_GENERIC_MARKER = 17,
  CUSTOM_ELEMENT = 288,
  CURRENT_POSITION = 289,
  WAYPOINT = 290,
  POI = 291,
  TRAFFIC_INCIDENT = 292,
  ROUTE = 293,
  GEOCOORDINATES = 294,

};

// Typedef #11 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class MapViewType {
  MAIN_MAP = 16,
  SPLIT_SCREEN = 17,
  GUIDING_MAP = 18,

};

// Typedef #12 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class MapScaleMode {
  AUTOMATIC = 272,
  MANUAL = 273,
  HYBRID = 274,

};

// Typedef #13 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class MapPerspective {
  PERSPECTIVE_2D = 32,
  PERSPECTIVE_3D = 33,

};

// Typedef #14 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class MapObject {
  BUILDINGS = 128,
  TERRAIN = 129,
  DET_POI,
  DET_TTI,
  DET_ONE_WAY_STREET_ARROW,
  DET_CITY_NAME,
  DET_ROAD_NAME,
  DET_MOTORWAY_EXIT_MARKER,
  DET_TRAFFIC_LIGHT,
  DET_TRAFFIC_LIGHTS_ALONG_ROUTE,
  DET_ROAD_ICON,
  DET_DTM,
  DET_LANDMARKS_3D,
  DET_FAVORITES,
  DET_ROUTE_BLOCKING,
  DET_ROAD,
  DET_POLYGON,
  DET_DESTINATION,
  DET_MANOEUVRE_MARKER,
  DET_LANE_GUIDANCE_MARKER,
  DET_ROUTE,
  DET_MANOEUVRE_ARROW,
  DET_TREKKING_TOUR,
  DET_TTI_EDGE_HIGHLIGHTING,
  DET_CITY_MARKER,
  DET_VEHICLE,
  DET_POLYGON_NAME,
  DET_OFF_ROAD_ROUTE,
  DET_TTI_ARROW,
  DET_POI_NAME,
  DET_RASTER_MAP,
  DET_BREAD_CRUMB_TRAIL,
  DET_EDGE_HIGHLIGHTING,
  DET_DIRECTION_ARROW,
  DET_CITY_BUILDINGS,
  DET_FPS_DISPLAY,
  DET_CROSSHAIR,
  DET_DEVDROP_BANNER,
  DET_FRAME_AROUND_MAP,
  DET_CORONA,
  DET_WATEREFFECT,
  DET_TREES,
  DET_RAIN,
  DET_CITYMODEL_ROUTE_TRANSPARENCY,
  DET_ROUTE_DESTINATION,
  DET_RANGE_DISPLAY,
  DET_POI_BRANDS,
  DET_WEATHER_MARKER,
  DET_WEATHER_OVERLAY,
  DET_WAYPOINT_ROUTE,
  DET_WAYPOINT_ROUTE_MARKER,
  DET_STENCIL,

};

// Typedef #15 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class PanAction {
  PAN_START = 256,
  PAN_TO = 257,
  PAN_END = 258,

};

// Typedef #16 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class Visibility {
  VISIBLE = 67,
  INVISIBLE = 68,
  FROZEN = 69,

};

// Typedef #17 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class Level {
  LEVEL_1 = 80,
  LEVEL_2 = 81,
  LEVEL_3 = 82,
  LEVEL_4 = 83,
  LEVEL_5 = 84,

};

// Typedef #18 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class HeadingType {
  CONSTANT_ANGLE = 112,
  TRACK_UP = 113,
  TOWARDS_TARGET = 114,

};

// Typedef #19 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class MapTheme {
  THEME_1 = 96,
  THEME_2 = 97,
  THEME_3 = 98,
  THEME_I_CLASSIC_DAY,
  THEME_I_CLASSIC_NIGHT,
  THEME_I_CLASSIC_TRAFFIC_DAY,
  THEME_I_CLASSIC_TRAFFIC_NIGHT,
  THEME_I_ALTERNATIVE_DAY,
  THEME_I_ALTERNATIVE_NIGHT,
  THEME_I_ALTERNATIVE_TRAFFIC_DAY,
  THEME_I_ALTERNATIVE_TRAFFIC_NIGHT,
  THEME_I_GUIDING,

};

// Typedef #20 from MapViewerControl in package org.genivi.navigation.mapviewer
struct MapScale {
  UInt16 scaleId;
  UInt16 scaleValue;
  MapScaleUnit unit;
  UInt32 millimetersPerPixel;
};

// Typedef #21 from MapViewerControl in package org.genivi.navigation.mapviewer
enum class MapScaleType {
  MIN = 64,
  MAX = 65,
  MID = 66,

};

// Typedef #22 from MapViewerControl in package org.genivi.navigation.mapviewer
struct SelectedMapElement {
  SelectableMapType type;
  Coordinate2D position;
  ElementValue value;
};

// Typedef #23 from MapViewerControl in package org.genivi.navigation.mapviewer
typedef std::map<MapObject, Boolean> MapObjectVisibility;

// Typedef #24 from MapViewerControl in package org.genivi.navigation.mapviewer
typedef std::map<Handle, CustomElement> CustomElementDict;
