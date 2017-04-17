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
#include "NavigationTypes.types.h"
#include "POIConfiguration.types.h"
#include "POIServiceTypes.types.h"

class POIConfiguration {
public:
  POIConfiguration();
  POIConfiguration(const POIConfiguration &c);
  POIConfiguration &operator=(const POIConfiguration &c);
  ~POIConfiguration();

  void getVersion(Version &interfaceversion);

  void setLocale(String languageCode, String countryCode, String scriptCode);

  void getLocale(String &languageCode, String &countryCode, String &scriptCode);

  void getSupportedLocales(std::vector<Locale> &localeList);

  void setTimeFormat(TimeFormat format);

  void getTimeFormat(TimeFormat &format);

  void getSupportedTimeFormats(std::vector<TimeFormat> &timeFormatList);

  void setCoordinatesFormat(CoordinatesFormat coordinatesFormat);

  void getCoordinatesFormat(CoordinatesFormat &coordinatesFormat);

  void getSupportedCoordinatesFormat(
      std::vector<CoordinatesFormat> &coordinatesFormatList);

  void setUnitsOfMeasurement(UnitsOfMeasurement unitsOfMeasurementList);

  void getUnitsOfMeasurement(UnitsOfMeasurement &unitsOfMeasurementList);

  void getSupportedUnitsOfMeasurement(
      UnitsOfMeasurementList &unitsOfMeasurementList);

private:
  // none
};
