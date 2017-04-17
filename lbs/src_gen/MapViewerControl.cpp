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
// Generated from Franca IDL Interface
// 2017-04-17 33:17

#include "MapViewerControl.h"

// Constructors, etc.
MapViewerControl::MapViewerControl() { /* TODO, or use implicit */
}

MapViewerControl::MapViewerControl(
    const MapViewerControl &x) { /* TODO, or use implicit */
}

MapViewerControl &MapViewerControl::
operator=(const MapViewerControl &x) { /* TODO, or use implicit */
}

MapViewerControl::~MapViewerControl() { /* TODO, or use implicit */
}

void MapViewerControl::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void MapViewerControl::createMapViewInstance(Handle sessionHandle,
                                             Dimension mapViewSize,
                                             MapViewType mapViewType,
                                             Handle &mapViewInstanceHandle)
{
    /* Method body for createMapViewInstance here */

};

void MapViewerControl::releaseMapViewInstance(Handle sessionHandle,
                                              Handle mapViewInstanceHandle)
{
    /* Method body for releaseMapViewInstance here */

};

void MapViewerControl::getMapViewType(Handle mapViewInstanceHandle,
                                      MapViewType &mapViewType)
{
    /* Method body for getMapViewType here */

};

void MapViewerControl::getSupportedMapViewTypes(
    std::vector<MapViewType> &mapViewTypeList)
{
    /* Method body for getSupportedMapViewTypes here */

};

void MapViewerControl::setTargetPoint(Handle sessionHandle,
                                      Handle mapViewInstanceHandle,
                                      Coordinate3D targetPoint)
{
    /* Method body for setTargetPoint here */

};

void MapViewerControl::getTargetPoint(Handle mapViewInstanceHandle,
                                      Coordinate3D &targetPoint)
{
    /* Method body for getTargetPoint here */

};

void MapViewerControl::setFollowCarMode(Handle sessionHandle,
                                        Handle mapViewInstanceHandle,
                                        Boolean followCarMode)
{
    /* Method body for setFollowCarMode here */

};

void MapViewerControl::getFollowCarMode(Handle mapViewInstanceHandle,
                                        Boolean &followCarMode)
{
    /* Method body for getFollowCarMode here */

};

void MapViewerControl::setCameraPosition(Handle sessionHandle,
                                         Handle mapViewInstanceHandle,
                                         Coordinate3D position)
{
    /* Method body for setCameraPosition here */

};

void MapViewerControl::getCameraPosition(Handle mapViewInstanceHandle,
                                         Coordinate3D &position)
{
    /* Method body for getCameraPosition here */

};

void MapViewerControl::setCameraHeadingAngle(Handle sessionHandle,
                                             Handle mapViewInstanceHandle,
                                             Int32 heading)
{
    /* Method body for setCameraHeadingAngle here */

};

void MapViewerControl::setCameraHeadingToTarget(Handle sessionHandle,
                                                Handle mapViewInstanceHandle,
                                                Coordinate2D target)
{
    /* Method body for setCameraHeadingToTarget here */

};

void MapViewerControl::setCameraHeadingTrackUp(Handle sessionHandle,
                                               Handle mapViewInstanceHandle)
{
    /* Method body for setCameraHeadingTrackUp here */

};

void MapViewerControl::getCameraHeading(Handle mapViewInstanceHandle,
                                        HeadingType &headingType,
                                        Int32 &headingAngle,
                                        Coordinate2D &target)
{
    /* Method body for getCameraHeading here */

};

void MapViewerControl::setCameraTiltAngle(Handle sessionHandle,
                                          Handle mapViewInstanceHandle,
                                          Int32 tilt)
{
    /* Method body for setCameraTiltAngle here */

};

void MapViewerControl::getCameraTiltAngle(Handle mapViewInstanceHandle,
                                          Int32 &tilt)
{
    /* Method body for getCameraTiltAngle here */

};

void MapViewerControl::setCameraRollAngle(Handle sessionHandle,
                                          Handle mapViewInstanceHandle,
                                          Int32 roll)
{
    /* Method body for setCameraRollAngle here */

};

void MapViewerControl::getCameraRollAngle(Handle mapViewInstanceHandle,
                                          Int32 &roll)
{
    /* Method body for getCameraRollAngle here */

};

void MapViewerControl::setCameraDistanceFromTargetPoint(
    Handle sessionHandle, Handle mapViewInstanceHandle, UInt32 distance)
{
    /* Method body for setCameraDistanceFromTargetPoint here */

};

void MapViewerControl::getCameraDistanceFromTargetPoint(
    Handle mapViewInstanceHandle, UInt32 &distance)
{
    /* Method body for getCameraDistanceFromTargetPoint here */

};

void MapViewerControl::setMapViewScaleMode(Handle sessionHandle,
                                           Handle mapViewInstanceHandle,
                                           MapScaleMode scaleMode)
{
    /* Method body for setMapViewScaleMode here */

};

void MapViewerControl::getMapViewScaleMode(Handle mapViewInstanceHandle,
                                           MapScaleMode &scaleMode)
{
    /* Method body for getMapViewScaleMode here */

};

void MapViewerControl::getSupportedMapViewScaleModes(
    Handle mapViewInstanceHandle, std::vector<MapScaleMode> &scaleModeList)
{
    /* Method body for getSupportedMapViewScaleModes here */

};

void MapViewerControl::setCameraHeight(Handle sessionHandle,
                                       Handle mapViewInstanceHandle,
                                       UInt32 height)
{
    /* Method body for setCameraHeight here */

};

void MapViewerControl::getCameraHeight(Handle mapViewInstanceHandle,
                                       UInt32 &height)
{
    /* Method body for getCameraHeight here */

};

void MapViewerControl::setMapViewPerspective(Handle sessionHandle,
                                             Handle mapViewInstanceHandle,
                                             MapPerspective perspective)
{
    /* Method body for setMapViewPerspective here */

};

void MapViewerControl::getMapViewPerspective(Handle mapViewInstanceHandle,
                                             MapPerspective &perspective)
{
    /* Method body for getMapViewPerspective here */

};

void MapViewerControl::getSupportedMapViewPerspectives(
    std::vector<MapPerspective> &perspectiveList)
{
    /* Method body for getSupportedMapViewPerspectives here */

};

void MapViewerControl::setMapViewObjectVisibility(
    Handle sessionHandle, Handle mapViewInstanceHandle,
    MapObjectVisibility objectVisibilityList)
{
    /* Method body for setMapViewObjectVisibility here */

};

void MapViewerControl::getMapViewObjectVisibility(
    Handle mapViewInstanceHandle, MapObjectVisibility &objectVisibilityList)
{
    /* Method body for getMapViewObjectVisibility here */

};

void MapViewerControl::getSupportedMapViewObjectVisibilities(
    Handle mapViewInstanceHandle, std::vector<MapObject> &objectVisibilityList)
{
    /* Method body for getSupportedMapViewObjectVisibilities here */

};

void MapViewerControl::getScaleList(Handle mapViewInstanceHandle,
                                    std::vector<MapScale> &scaleList)
{
    /* Method body for getScaleList here */

};

void MapViewerControl::setMapViewScale(Handle sessionHandle,
                                       Handle mapViewInstanceHandle,
                                       UInt16 scaleID)
{
    /* Method body for setMapViewScale here */

};

void MapViewerControl::setMapViewScaleByDelta(Handle sessionHandle,
                                              Handle mapViewInstanceHandle,
                                              Int16 scaleDelta)
{
    /* Method body for setMapViewScaleByDelta here */

};

void MapViewerControl::setMapViewScaleByMetersPerPixel(
    Handle sessionHandle, Handle mapViewInstanceHandle, Double metersPerPixel)
{
    /* Method body for setMapViewScaleByMetersPerPixel here */

};

void MapViewerControl::getMapViewScale(Handle mapViewInstanceHandle,
                                       UInt8 &scaleID, MapScaleType &isMinMax)
{
    /* Method body for getMapViewScale here */

};

void MapViewerControl::setMapViewBoundingBox(Handle sessionHandle,
                                             Handle mapViewInstanceHandle,
                                             Rectangle boundingBox)
{
    /* Method body for setMapViewBoundingBox here */

};

void MapViewerControl::getMapViewBoundingBox(Handle mapViewInstanceHandle,
                                             Rectangle &boundingBox)
{
    /* Method body for getMapViewBoundingBox here */

};

void MapViewerControl::setMapViewSaveArea(Handle sessionHandle,
                                          Handle mapViewInstanceHandle,
                                          MapViewArea saveArea)
{
    /* Method body for setMapViewSaveArea here */

};

void MapViewerControl::getMapViewSaveArea(Handle mapViewInstanceHandle,
                                          MapViewArea &saveArea)
{
    /* Method body for getMapViewSaveArea here */

};

void MapViewerControl::setMapViewPan(Handle sessionHandle,
                                     Handle mapViewInstanceHandle,
                                     PanAction panningAction,
                                     std::vector<Pixel> pixelCoordinates)
{
    /* Method body for setMapViewPan here */

};

void MapViewerControl::getMapViewPan(Handle mapViewInstanceHandle,
                                     PanAction valueToReturn,
                                     std::vector<Pixel> &pixelCoordinates)
{
    /* Method body for getMapViewPan here */

};

void MapViewerControl::setMapViewRotation(Handle sessionHandle,
                                          Handle mapViewInstanceHandle,
                                          Int32 rotationAngle,
                                          Int32 rotationAnglePerSecond)
{
    /* Method body for setMapViewRotation here */

};

void MapViewerControl::getMapViewRotation(Handle mapViewInstanceHandle,
                                          Int32 &rotationAngle,
                                          Int32 &rotationAnglePerFrame)
{
    /* Method body for getMapViewRotation here */

};

void MapViewerControl::setMapViewVisibilityMode(Handle sessionHandle,
                                                Handle mapViewInstanceHandle,
                                                Visibility visibilityMode)
{
    /* Method body for setMapViewVisibilityMode here */

};

void MapViewerControl::getMapViewVisibilityMode(Handle mapViewInstanceHandle,
                                                Visibility &visibilityMode)
{
    /* Method body for getMapViewVisibilityMode here */

};

void MapViewerControl::getSupportedMapViewVisibilityModes(
    std::vector<Visibility> &visibilityModeList)
{
    /* Method body for getSupportedMapViewVisibilityModes here */

};

void MapViewerControl::setMapViewPerformanceLevel(Handle sessionHandle,
                                                  Handle mapViewInstanceHandle,
                                                  Level performanceLevel)
{
    /* Method body for setMapViewPerformanceLevel here */

};

void MapViewerControl::getMapViewPerformanceLevel(Handle mapViewInstanceHandle,
                                                  Level &performanceLevel)
{
    /* Method body for getMapViewPerformanceLevel here */

};

void MapViewerControl::getSupportedMapViewPerformanceLevels(
    std::vector<Level> &performanceLevelList)
{
    /* Method body for getSupportedMapViewPerformanceLevels here */

};

void MapViewerControl::displayRoute(Handle sessionHandle,
                                    Handle mapViewInstanceHandle,
                                    Handle routeHandle, Boolean highlighted)
{
    /* Method body for displayRoute here */

};

void MapViewerControl::hideRoute(Handle sessionHandle,
                                 Handle mapViewInstanceHandle,
                                 Handle routeHandle)
{
    /* Method body for hideRoute here */

};

void MapViewerControl::getDisplayedRoutes(
    Handle mapViewInstanceHandle, std::vector<DisplayedRoute> &displayedRoutes)
{
    /* Method body for getDisplayedRoutes here */

};

void MapViewerControl::getPoiCategoriesVisible(
    Handle mapViewInstanceHandle, std::vector<CategoryID> &poiCategoryIds)
{
    /* Method body for getPoiCategoriesVisible here */

};

void MapViewerControl::setPoiCategoriesVisible(
    Handle sessionHandle, Handle mapViewInstanceHandle,
    std::vector<CategoryID> poiCategoryIds)
{
    /* Method body for setPoiCategoriesVisible here */

};

void MapViewerControl::setPoiCategoriesVisibleWithinLimits(
    Handle sessionHandle, Handle mapViewInstanceHandle,
    std::vector<CategoryID> poiCategoryIds, UInt8 minScaleID, UInt8 maxScaleID)
{
    /* Method body for setPoiCategoriesVisibleWithinLimits here */

};

void MapViewerControl::setPoiCategoriesNotVisible(
    Handle sessionHandle, Handle mapViewInstanceHandle,
    std::vector<CategoryID> poiCategoryIds)
{
    /* Method body for setPoiCategoriesNotVisible here */

};

void MapViewerControl::setTrafficIncidentsVisibility(
    Handle sessionHandle, Handle mapViewInstanceHandle, Boolean visible)
{
    /* Method body for setTrafficIncidentsVisibility here */

};

void MapViewerControl::setMapViewTheme(Handle sessionHandle,
                                       Handle mapViewInstanceHandle,
                                       MapTheme mapViewTheme)
{
    /* Method body for setMapViewTheme here */

};

void MapViewerControl::getMapViewTheme(Handle mapViewInstanceHandle,
                                       MapTheme &mapViewTheme)
{
    /* Method body for getMapViewTheme here */

};

void MapViewerControl::getSupportedMapViewThemes(
    std::vector<MapTheme> &mapViewThemeList)
{
    /* Method body for getSupportedMapViewThemes here */

};

void MapViewerControl::convertPixelCoordsToGeoCoords(
    Handle sessionHandle, Handle mapViewInstanceHandle,
    std::vector<Pixel> pixelCoordinates,
    std::vector<Coordinate2D> &geoCoordinates)
{
    /* Method body for convertPixelCoordsToGeoCoords here */

};

void MapViewerControl::convertGeoCoordsToPixelCoords(
    Handle sessionHandle, Handle mapViewInstanceHandle,
    std::vector<Coordinate2D> geoCoordinates,
    std::vector<Pixel> &pixelCoordinates)
{
    /* Method body for convertGeoCoordsToPixelCoords here */

};

void MapViewerControl::displayCustomElements(
    Handle sessionHandle, Handle mapViewInstanceHandle,
    std::vector<CustomElement> customElements,
    std::vector<Handle> &customElemenHandles)
{
    /* Method body for displayCustomElements here */

};

void MapViewerControl::hideCustomElements(
    Handle sessionHandle, Handle mapViewInstanceHandle,
    std::vector<Handle> customElemenHandles)
{
    /* Method body for hideCustomElements here */

};

void MapViewerControl::getDisplayedCustomElements(
    Handle mapViewInstanceHandle, CustomElementDict &customElements)
{
    /* Method body for getDisplayedCustomElements here */

};

void MapViewerControl::selectElementsOnMap(
    Handle mapViewInstanceHandle, Pixel pixelCoordinate,
    std::vector<SelectableMapType> selectableTypes,
    UInt16 maxNumberOfSelectedElements,
    std::vector<SelectedMapElement> &selectedElements)
{
    /* Method body for selectElementsOnMap here */

};
