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
#pragma once
// Generated from Franca IDL Interface
// 2017-04-17 33:17

#include "CommonTypes.types.h"
#include "MapViewerControl.types.h"
#include "NavigationTypes.types.h"

class MapViewerControl {
public:
  MapViewerControl();
  MapViewerControl(const MapViewerControl &c);
  MapViewerControl &operator=(const MapViewerControl &c);
  ~MapViewerControl();

  void getVersion(Version &interfaceversion);

  void createMapViewInstance(Handle sessionHandle, Dimension mapViewSize,
                             MapViewType mapViewType,
                             Handle &mapViewInstanceHandle);

  void releaseMapViewInstance(Handle sessionHandle,
                              Handle mapViewInstanceHandle);

  void getMapViewType(Handle mapViewInstanceHandle, MapViewType &mapViewType);

  void getSupportedMapViewTypes(std::vector<MapViewType> &mapViewTypeList);

  void setTargetPoint(Handle sessionHandle, Handle mapViewInstanceHandle,
                      Coordinate3D targetPoint);

  void getTargetPoint(Handle mapViewInstanceHandle, Coordinate3D &targetPoint);

  void setFollowCarMode(Handle sessionHandle, Handle mapViewInstanceHandle,
                        Boolean followCarMode);

  void getFollowCarMode(Handle mapViewInstanceHandle, Boolean &followCarMode);

  void setCameraPosition(Handle sessionHandle, Handle mapViewInstanceHandle,
                         Coordinate3D position);

  void getCameraPosition(Handle mapViewInstanceHandle, Coordinate3D &position);

  void setCameraHeadingAngle(Handle sessionHandle, Handle mapViewInstanceHandle,
                             Int32 heading);

  void setCameraHeadingToTarget(Handle sessionHandle,
                                Handle mapViewInstanceHandle,
                                Coordinate2D target);

  void setCameraHeadingTrackUp(Handle sessionHandle,
                               Handle mapViewInstanceHandle);

  void getCameraHeading(Handle mapViewInstanceHandle, HeadingType &headingType,
                        Int32 &headingAngle, Coordinate2D &target);

  void setCameraTiltAngle(Handle sessionHandle, Handle mapViewInstanceHandle,
                          Int32 tilt);

  void getCameraTiltAngle(Handle mapViewInstanceHandle, Int32 &tilt);

  void setCameraRollAngle(Handle sessionHandle, Handle mapViewInstanceHandle,
                          Int32 roll);

  void getCameraRollAngle(Handle mapViewInstanceHandle, Int32 &roll);

  void setCameraDistanceFromTargetPoint(Handle sessionHandle,
                                        Handle mapViewInstanceHandle,
                                        UInt32 distance);

  void getCameraDistanceFromTargetPoint(Handle mapViewInstanceHandle,
                                        UInt32 &distance);

  void setMapViewScaleMode(Handle sessionHandle, Handle mapViewInstanceHandle,
                           MapScaleMode scaleMode);

  void getMapViewScaleMode(Handle mapViewInstanceHandle,
                           MapScaleMode &scaleMode);

  void getSupportedMapViewScaleModes(Handle mapViewInstanceHandle,
                                     std::vector<MapScaleMode> &scaleModeList);

  void setCameraHeight(Handle sessionHandle, Handle mapViewInstanceHandle,
                       UInt32 height);

  void getCameraHeight(Handle mapViewInstanceHandle, UInt32 &height);

  void setMapViewPerspective(Handle sessionHandle, Handle mapViewInstanceHandle,
                             MapPerspective perspective);

  void getMapViewPerspective(Handle mapViewInstanceHandle,
                             MapPerspective &perspective);

  void
  getSupportedMapViewPerspectives(std::vector<MapPerspective> &perspectiveList);

  void setMapViewObjectVisibility(Handle sessionHandle,
                                  Handle mapViewInstanceHandle,
                                  MapObjectVisibility objectVisibilityList);

  void getMapViewObjectVisibility(Handle mapViewInstanceHandle,
                                  MapObjectVisibility &objectVisibilityList);

  void getSupportedMapViewObjectVisibilities(
      Handle mapViewInstanceHandle,
      std::vector<MapObject> &objectVisibilityList);

  void getScaleList(Handle mapViewInstanceHandle,
                    std::vector<MapScale> &scaleList);

  void setMapViewScale(Handle sessionHandle, Handle mapViewInstanceHandle,
                       UInt16 scaleID);

  void setMapViewScaleByDelta(Handle sessionHandle,
                              Handle mapViewInstanceHandle, Int16 scaleDelta);

  void setMapViewScaleByMetersPerPixel(Handle sessionHandle,
                                       Handle mapViewInstanceHandle,
                                       Double metersPerPixel);

  void getMapViewScale(Handle mapViewInstanceHandle, UInt8 &scaleID,
                       MapScaleType &isMinMax);

  void setMapViewBoundingBox(Handle sessionHandle, Handle mapViewInstanceHandle,
                             Rectangle boundingBox);

  void getMapViewBoundingBox(Handle mapViewInstanceHandle,
                             Rectangle &boundingBox);

  void setMapViewSaveArea(Handle sessionHandle, Handle mapViewInstanceHandle,
                          MapViewArea saveArea);

  void getMapViewSaveArea(Handle mapViewInstanceHandle, MapViewArea &saveArea);

  void setMapViewPan(Handle sessionHandle, Handle mapViewInstanceHandle,
                     PanAction panningAction,
                     std::vector<Pixel> pixelCoordinates);

  void getMapViewPan(Handle mapViewInstanceHandle, PanAction valueToReturn,
                     std::vector<Pixel> &pixelCoordinates);

  void setMapViewRotation(Handle sessionHandle, Handle mapViewInstanceHandle,
                          Int32 rotationAngle, Int32 rotationAnglePerSecond);

  void getMapViewRotation(Handle mapViewInstanceHandle, Int32 &rotationAngle,
                          Int32 &rotationAnglePerFrame);

  void setMapViewVisibilityMode(Handle sessionHandle,
                                Handle mapViewInstanceHandle,
                                Visibility visibilityMode);

  void getMapViewVisibilityMode(Handle mapViewInstanceHandle,
                                Visibility &visibilityMode);

  void getSupportedMapViewVisibilityModes(
      std::vector<Visibility> &visibilityModeList);

  void setMapViewPerformanceLevel(Handle sessionHandle,
                                  Handle mapViewInstanceHandle,
                                  Level performanceLevel);

  void getMapViewPerformanceLevel(Handle mapViewInstanceHandle,
                                  Level &performanceLevel);

  void getSupportedMapViewPerformanceLevels(
      std::vector<Level> &performanceLevelList);

  void displayRoute(Handle sessionHandle, Handle mapViewInstanceHandle,
                    Handle routeHandle, Boolean highlighted);

  void hideRoute(Handle sessionHandle, Handle mapViewInstanceHandle,
                 Handle routeHandle);

  void getDisplayedRoutes(Handle mapViewInstanceHandle,
                          std::vector<DisplayedRoute> &displayedRoutes);

  void getPoiCategoriesVisible(Handle mapViewInstanceHandle,
                               std::vector<CategoryID> &poiCategoryIds);

  void setPoiCategoriesVisible(Handle sessionHandle,
                               Handle mapViewInstanceHandle,
                               std::vector<CategoryID> poiCategoryIds);

  void
  setPoiCategoriesVisibleWithinLimits(Handle sessionHandle,
                                      Handle mapViewInstanceHandle,
                                      std::vector<CategoryID> poiCategoryIds,
                                      UInt8 minScaleID, UInt8 maxScaleID);

  void setPoiCategoriesNotVisible(Handle sessionHandle,
                                  Handle mapViewInstanceHandle,
                                  std::vector<CategoryID> poiCategoryIds);

  void setTrafficIncidentsVisibility(Handle sessionHandle,
                                     Handle mapViewInstanceHandle,
                                     Boolean visible);

  void setMapViewTheme(Handle sessionHandle, Handle mapViewInstanceHandle,
                       MapTheme mapViewTheme);

  void getMapViewTheme(Handle mapViewInstanceHandle, MapTheme &mapViewTheme);

  void getSupportedMapViewThemes(std::vector<MapTheme> &mapViewThemeList);

  void convertPixelCoordsToGeoCoords(Handle sessionHandle,
                                     Handle mapViewInstanceHandle,
                                     std::vector<Pixel> pixelCoordinates,
                                     std::vector<Coordinate2D> &geoCoordinates);

  void convertGeoCoordsToPixelCoords(Handle sessionHandle,
                                     Handle mapViewInstanceHandle,
                                     std::vector<Coordinate2D> geoCoordinates,
                                     std::vector<Pixel> &pixelCoordinates);

  void displayCustomElements(Handle sessionHandle, Handle mapViewInstanceHandle,
                             std::vector<CustomElement> customElements,
                             std::vector<Handle> &customElemenHandles);

  void hideCustomElements(Handle sessionHandle, Handle mapViewInstanceHandle,
                          std::vector<Handle> customElemenHandles);

  void getDisplayedCustomElements(Handle mapViewInstanceHandle,
                                  CustomElementDict &customElements);

  void selectElementsOnMap(Handle mapViewInstanceHandle, Pixel pixelCoordinate,
                           std::vector<SelectableMapType> selectableTypes,
                           UInt16 maxNumberOfSelectedElements,
                           std::vector<SelectedMapElement> &selectedElements);

private:
  // none
};
