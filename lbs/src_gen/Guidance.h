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
#include "Guidance.types.h"
#include "NavigationCoreTypes.types.h"
#include "NavigationTypes.types.h"

class Guidance {
public:
  Guidance();
  Guidance(const Guidance &c);
  Guidance &operator=(const Guidance &c);
  ~Guidance();

  void getVersion(Version &interfaceversion);

  void startGuidance(Handle sessionHandle, Handle routeHandle);

  void stopGuidance(Handle sessionHandle);

  void setVoiceGuidance(Boolean activate, String voice);

  void getGuidanceDetails(Boolean &voiceGuidance, Boolean &vehicleOnTheRoad,
                          Boolean &isDestinationReached,
                          ManeuverPhase &maneuver);

  void playVoiceManeuver(

      );

  void getWaypointInformation(UInt16 requestedNumberOfWaypoints,
                              UInt16 &numberOfWaypoints,
                              std::vector<WaypointStruct> &waypointsList);

  void getDestinationInformation(UInt32 &offset, UInt32 &travelTime,
                                 Int32 &direction, Side &side, Int16 &timeZone,
                                 Int16 &daylightSavingTime);

  void getManeuversList(UInt16 requestedNumberOfManeuvers,
                        UInt32 maneuverOffset, UInt16 &numberOfManeuvers,
                        std::vector<Maneuver> &maneuversList);

  void setRouteCalculationMode(Handle sessionHandle,
                               CalculationMode routeCalculationMode);

  void skipNextManeuver(Handle sessionHandle);

  void getGuidanceStatus(GuidanceStatus &guidanceStatus, Handle &routeHandle);

  void setVoiceGuidanceSettings(PromptMode promptMode);

  void getVoiceGuidanceSettings(PromptMode &promptMode);

private:
  // none
};
