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
#include "MapMatchedPosition.types.h"
#include "NavigationCoreTypes.types.h"
#include "NavigationTypes.types.h"

class MapMatchedPosition {
public:
  MapMatchedPosition();
  MapMatchedPosition(const MapMatchedPosition &c);
  MapMatchedPosition &operator=(const MapMatchedPosition &c);
  ~MapMatchedPosition();

  void getVersion(Version &interfaceversion);

  void setSimulationMode(Handle sessionHandle, Boolean activate);

  void getSimulationStatus(SimulationStatus &simulationStatus);

  void setSimulationSpeed(Handle sessionHandle, UInt8 speedFactor);

  void getSimulationSpeed(UInt8 &speedFactor);

  void startSimulation(Handle sessionHandle);

  void pauseSimulation(Handle sessionHandle);

  void getPosition(std::vector<PositionItemKey> valuesToReturn,
                   PositionItemDict &position);

  void setPosition(Handle sessionHandle, PositionItemDict position);

  void getCurrentAddress(std::vector<AddressItemKey> valuesToReturn,
                         AddressItemDict &address);

  void getPositionOnSegment(std::vector<PositionOnSegmentKey> valuesToReturn,
                            PositionOnSegmentDict &positionOnSegment);

  void getStatus(std::vector<PositionStatus> valuesToReturn,
                 PositionStatusDict &status);

private:
  // none
};
