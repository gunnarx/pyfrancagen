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

#include "MapMatchedPosition.h"

// Constructors, etc.
MapMatchedPosition::MapMatchedPosition() { /* TODO, or use implicit */
}

MapMatchedPosition::MapMatchedPosition(
    const MapMatchedPosition &x) { /* TODO, or use implicit */
}

MapMatchedPosition &MapMatchedPosition::
operator=(const MapMatchedPosition &x) { /* TODO, or use implicit */
}

MapMatchedPosition::~MapMatchedPosition() { /* TODO, or use implicit */
}

void MapMatchedPosition::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void MapMatchedPosition::setSimulationMode(Handle sessionHandle,
                                           Boolean activate)
{
    /* Method body for setSimulationMode here */

};

void MapMatchedPosition::getSimulationStatus(
    SimulationStatus &simulationStatus)
{
    /* Method body for getSimulationStatus here */

};

void MapMatchedPosition::setSimulationSpeed(Handle sessionHandle,
                                            UInt8 speedFactor)
{
    /* Method body for setSimulationSpeed here */

};

void MapMatchedPosition::getSimulationSpeed(UInt8 &speedFactor)
{
    /* Method body for getSimulationSpeed here */

};

void MapMatchedPosition::startSimulation(Handle sessionHandle)
{
    /* Method body for startSimulation here */

};

void MapMatchedPosition::pauseSimulation(Handle sessionHandle)
{
    /* Method body for pauseSimulation here */

};

void MapMatchedPosition::getPosition(
    std::vector<PositionItemKey> valuesToReturn, PositionItemDict &position)
{
    /* Method body for getPosition here */

};

void MapMatchedPosition::setPosition(Handle sessionHandle,
                                     PositionItemDict position)
{
    /* Method body for setPosition here */

};

void MapMatchedPosition::getCurrentAddress(
    std::vector<AddressItemKey> valuesToReturn, AddressItemDict &address)
{
    /* Method body for getCurrentAddress here */

};

void MapMatchedPosition::getPositionOnSegment(
    std::vector<PositionOnSegmentKey> valuesToReturn,
    PositionOnSegmentDict &positionOnSegment)
{
    /* Method body for getPositionOnSegment here */

};

void MapMatchedPosition::getStatus(std::vector<PositionStatus> valuesToReturn,
                                   PositionStatusDict &status)
{
    /* Method body for getStatus here */

};
