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

#include "LocationInput.h"

// Constructors, etc.
LocationInput::LocationInput() { /* TODO, or use implicit */
}

LocationInput::LocationInput(
    const LocationInput &x) { /* TODO, or use implicit */
}

LocationInput &LocationInput::
operator=(const LocationInput &x) { /* TODO, or use implicit */
}

LocationInput::~LocationInput() { /* TODO, or use implicit */
}

void LocationInput::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void LocationInput::createLocationInput(Handle sessionHandle,
                                        LocationHandle &locationInputHandle)
{
    /* Method body for createLocationInput here */

};

void LocationInput::deleteLocationInput(Handle sessionHandle,
                                        LocationHandle locationInputHandle)
{
    /* Method body for deleteLocationInput here */

};

void LocationInput::getSupportedAddressAttributes(
    AddressAttributeList &addressAttributesList)
{
    /* Method body for getSupportedAddressAttributes here */

};

void LocationInput::setAddress(Handle sessionHandle,
                               LocationHandle locationInputHandle,
                               Address address)
{
    /* Method body for setAddress here */

};

void LocationInput::setSelectionCriterion(Handle sessionHandle,
                                          LocationHandle locationInputHandle,
                                          AddressAttribute selectionCriterion)
{
    /* Method body for setSelectionCriterion here */

};

void LocationInput::spell(Handle sessionHandle,
                          LocationHandle locationInputHandle,
                          String inputCharacter, UInt16 maxWindowSize)
{
    /* Method body for spell here */

};

void LocationInput::search(Handle sessionHandle,
                           LocationHandle locationInputHandle,
                           String inputString, UInt16 maxWindowSize)
{
    /* Method body for search here */

};

void LocationInput::requestListUpdate(Handle sessionHandle,
                                      LocationHandle locationInputHandle,
                                      UInt16 offset, UInt16 maxWindowSize)
{
    /* Method body for requestListUpdate here */

};

void LocationInput::selectEntry(Handle sessionHandle,
                                LocationHandle locationInputHandle,
                                UInt16 index)
{
    /* Method body for selectEntry here */

};

void LocationInput::getEntry(LocationHandle locationInputHandle, UInt16 index,
                             Address &address)
{
    /* Method body for getEntry here */

};

void LocationInput::validateAddress(Handle sessionHandle,
                                    LocationHandle locationInputHandle,
                                    Address inputAddress)
{
    /* Method body for validateAddress here */

};

void LocationInput::reverseGeocode(Handle sessionHandle,
                                   LocationHandle locationInputHandle,
                                   Coordinate2D coordinate)
{
    /* Method body for reverseGeocode here */

};
