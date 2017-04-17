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

#include "Guidance.h"

// Constructors, etc.
Guidance::Guidance() { /* TODO, or use implicit */
}

Guidance::Guidance(const Guidance &x) { /* TODO, or use implicit */
}

Guidance &Guidance::operator=(const Guidance &x) { /* TODO, or use implicit */
}

Guidance::~Guidance() { /* TODO, or use implicit */
}

void Guidance::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void Guidance::startGuidance(Handle sessionHandle, Handle routeHandle)
{
    /* Method body for startGuidance here */

};

void Guidance::stopGuidance(Handle sessionHandle)
{
    /* Method body for stopGuidance here */

};

void Guidance::setVoiceGuidance(Boolean activate, String voice)
{
    /* Method body for setVoiceGuidance here */

};

void Guidance::getGuidanceDetails(Boolean &voiceGuidance,
                                  Boolean &vehicleOnTheRoad,
                                  Boolean &isDestinationReached,
                                  ManeuverPhase &maneuver)
{
    /* Method body for getGuidanceDetails here */

};

void Guidance::playVoiceManeuver()
{
    /* Method body for playVoiceManeuver here */

};

void Guidance::getWaypointInformation(
    UInt16 requestedNumberOfWaypoints, UInt16 &numberOfWaypoints,
    std::vector<WaypointStruct> &waypointsList)
{
    /* Method body for getWaypointInformation here */

};

void Guidance::getDestinationInformation(UInt32 &offset, UInt32 &travelTime,
                                         Int32 &direction, Side &side,
                                         Int16 &timeZone,
                                         Int16 &daylightSavingTime)
{
    /* Method body for getDestinationInformation here */

};

void Guidance::getManeuversList(UInt16 requestedNumberOfManeuvers,
                                UInt32 maneuverOffset,
                                UInt16 &numberOfManeuvers,
                                std::vector<Maneuver> &maneuversList)
{
    /* Method body for getManeuversList here */

};

void Guidance::setRouteCalculationMode(Handle sessionHandle,
                                       CalculationMode routeCalculationMode)
{
    /* Method body for setRouteCalculationMode here */

};

void Guidance::skipNextManeuver(Handle sessionHandle)
{
    /* Method body for skipNextManeuver here */

};

void Guidance::getGuidanceStatus(GuidanceStatus &guidanceStatus,
                                 Handle &routeHandle)
{
    /* Method body for getGuidanceStatus here */

};

void Guidance::setVoiceGuidanceSettings(PromptMode promptMode)
{
    /* Method body for setVoiceGuidanceSettings here */

};

void Guidance::getVoiceGuidanceSettings(PromptMode &promptMode)
{
    /* Method body for getVoiceGuidanceSettings here */

};
