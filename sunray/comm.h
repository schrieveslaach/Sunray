// Ardumower Sunray
// Copyright (c) 2013-2020 by Alexander Grau, Grau GmbH
// Licensed GPLv3 for open source use
// or Grau GmbH Commercial License for commercial use (http://grauonline.de/cms2/?page_id=153)

// robot communication interface (Console/Bluetooth/WIFI)

#ifndef COMM_H
#define COMM_H

#include <Arduino.h>

void processComm();
void outputConsole();

String processCmd(String channel, bool checkCrc, bool decrypt, bool verbose, const String &cmd);
void processConsole();
String cmdSwitchOffRobot();


extern bool bleConnected;


#endif
