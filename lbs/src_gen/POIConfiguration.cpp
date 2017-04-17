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

#include "POIConfiguration.h"

// Constructors, etc.
POIConfiguration::POIConfiguration() { /* TODO, or use implicit */
}

POIConfiguration::POIConfiguration(
    const POIConfiguration &x) { /* TODO, or use implicit */
}

POIConfiguration &POIConfiguration::
operator=(const POIConfiguration &x) { /* TODO, or use implicit */
}

POIConfiguration::~POIConfiguration() { /* TODO, or use implicit */
}

void POIConfiguration::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void POIConfiguration::setLocale(String languageCode, String countryCode,
                                 String scriptCode)
{
    /* Method body for setLocale here */

};

void POIConfiguration::getLocale(String &languageCode, String &countryCode,
                                 String &scriptCode)
{
    /* Method body for getLocale here */

};

void POIConfiguration::getSupportedLocales(std::vector<Locale> &localeList)
{
    /* Method body for getSupportedLocales here */

};

void POIConfiguration::setTimeFormat(TimeFormat format)
{
    /* Method body for setTimeFormat here */

};

void POIConfiguration::getTimeFormat(TimeFormat &format)
{
    /* Method body for getTimeFormat here */

};

void POIConfiguration::getSupportedTimeFormats(
    std::vector<TimeFormat> &timeFormatList)
{
    /* Method body for getSupportedTimeFormats here */

};

void POIConfiguration::setCoordinatesFormat(
    CoordinatesFormat coordinatesFormat)
{
    /* Method body for setCoordinatesFormat here */

};

void POIConfiguration::getCoordinatesFormat(
    CoordinatesFormat &coordinatesFormat)
{
    /* Method body for getCoordinatesFormat here */

};

void POIConfiguration::getSupportedCoordinatesFormat(
    std::vector<CoordinatesFormat> &coordinatesFormatList)
{
    /* Method body for getSupportedCoordinatesFormat here */

};

void POIConfiguration::setUnitsOfMeasurement(
    UnitsOfMeasurement unitsOfMeasurementList)
{
    /* Method body for setUnitsOfMeasurement here */

};

void POIConfiguration::getUnitsOfMeasurement(
    UnitsOfMeasurement &unitsOfMeasurementList)
{
    /* Method body for getUnitsOfMeasurement here */

};

void POIConfiguration::getSupportedUnitsOfMeasurement(
    UnitsOfMeasurementList &unitsOfMeasurementList)
{
    /* Method body for getSupportedUnitsOfMeasurement here */

};
