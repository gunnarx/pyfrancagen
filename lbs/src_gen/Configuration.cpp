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

#include "Configuration.h"

// Constructors, etc.
Configuration::Configuration() { /* TODO, or use implicit */
}

Configuration::Configuration(
    const Configuration &x) { /* TODO, or use implicit */
}

Configuration &Configuration::
operator=(const Configuration &x) { /* TODO, or use implicit */
}

Configuration::~Configuration() { /* TODO, or use implicit */
}

void Configuration::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void Configuration::setLocale(String languageCode, String countryCode,
                              String scriptCode)
{
    /* Method body for setLocale here */

};

void Configuration::getLocale(String &languageCode, String &countryCode,
                              String &scriptCode)
{
    /* Method body for getLocale here */

};

void Configuration::getSupportedLocales(std::vector<Locale> &localeList)
{
    /* Method body for getSupportedLocales here */

};

void Configuration::setTimeFormat(TimeFormat format)
{
    /* Method body for setTimeFormat here */

};

void Configuration::getTimeFormat(TimeFormat &format)
{
    /* Method body for getTimeFormat here */

};

void Configuration::getSupportedTimeFormats(
    std::vector<TimeFormat> &timeFormatList)
{
    /* Method body for getSupportedTimeFormats here */

};

void Configuration::setCoordinatesFormat(CoordinatesFormat coordinatesFormat)
{
    /* Method body for setCoordinatesFormat here */

};

void Configuration::getCoordinatesFormat(CoordinatesFormat &coordinatesFormat)
{
    /* Method body for getCoordinatesFormat here */

};

void Configuration::getSupportedCoordinatesFormat(
    std::vector<CoordinatesFormat> &coordinatesFormatList)
{
    /* Method body for getSupportedCoordinatesFormat here */

};

void Configuration::setUnitsOfMeasurement(
    UnitsOfMeasurement unitsOfMeasurement)
{
    /* Method body for setUnitsOfMeasurement here */

};

void Configuration::getUnitsOfMeasurement(
    UnitsOfMeasurement &unitsOfMeasurement)
{
    /* Method body for getUnitsOfMeasurement here */

};

void Configuration::getSupportedUnitsOfMeasurement(
    UnitsOfMeasurementList &unitsOfMeasurementList)
{
    /* Method body for getSupportedUnitsOfMeasurement here */

};
