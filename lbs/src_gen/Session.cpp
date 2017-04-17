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

#include "Session.h"

// Constructors, etc.
Session::Session() { /* TODO, or use implicit */
}

Session::Session(const Session &x) { /* TODO, or use implicit */
}

Session &Session::operator=(const Session &x) { /* TODO, or use implicit */
}

Session::~Session() { /* TODO, or use implicit */
}

void Session::getVersion(Version &interfaceversion)
{
    /* Method body for getVersion here */

};

void Session::createSession(String clientApp, Handle &sessionHandle)
{
    /* Method body for createSession here */

};

void Session::deleteSession(Handle sessionHandle)
{
    /* Method body for deleteSession here */

};

void Session::getSessionStatus(Handle sessionHandle,
                               SessionStatus &sessionStatus)
{
    /* Method body for getSessionStatus here */

};

void Session::getAllSessions(std::vector<Session> &sessionsList)
{
    /* Method body for getAllSessions here */

};
