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
#include "LocationInput.types.h"
#include "NavigationCoreTypes.types.h"
#include "NavigationTypes.types.h"

class LocationInput {
public:
  LocationInput();
  LocationInput(const LocationInput &c);
  LocationInput &operator=(const LocationInput &c);
  ~LocationInput();

  void getVersion(Version &interfaceversion);

  void createLocationInput(Handle sessionHandle,
                           LocationHandle &locationInputHandle);

  void deleteLocationInput(Handle sessionHandle,
                           LocationHandle locationInputHandle);

  void
  getSupportedAddressAttributes(AddressAttributeList &addressAttributesList);

  void setAddress(Handle sessionHandle, LocationHandle locationInputHandle,
                  Address address);

  void setSelectionCriterion(Handle sessionHandle,
                             LocationHandle locationInputHandle,
                             AddressAttribute selectionCriterion);

  void spell(Handle sessionHandle, LocationHandle locationInputHandle,
             String inputCharacter, UInt16 maxWindowSize);

  void search(Handle sessionHandle, LocationHandle locationInputHandle,
              String inputString, UInt16 maxWindowSize);

  void requestListUpdate(Handle sessionHandle,
                         LocationHandle locationInputHandle, UInt16 offset,
                         UInt16 maxWindowSize);

  void selectEntry(Handle sessionHandle, LocationHandle locationInputHandle,
                   UInt16 index);

  void getEntry(LocationHandle locationInputHandle, UInt16 index,
                Address &address);

  void validateAddress(Handle sessionHandle, LocationHandle locationInputHandle,
                       Address inputAddress);

  void reverseGeocode(Handle sessionHandle, LocationHandle locationInputHandle,
                      Coordinate2D coordinate);

private:
  // none
};
