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
#include "Session.types.h"

class Session {
public:
  Session();
  Session(const Session &c);
  Session &operator=(const Session &c);
  ~Session();

  void getVersion(Version &interfaceversion);

  void createSession(String clientApp, Handle &sessionHandle);

  void deleteSession(Handle sessionHandle);

  void getSessionStatus(Handle sessionHandle, SessionStatus &sessionStatus);

  void getAllSessions(std::vector<Session> &sessionsList);

private:
  // none
};
