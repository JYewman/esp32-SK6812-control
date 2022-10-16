/*
 * File: esp32-SK6812-control.ino
 * Project: esp32-SK6812-control
 * Created Date: Sunday, October 16th 2022, 8:37:18 pm
 * Author: Joshua Yewman
 * Author Email: joshua@gosystem.co.uk
 * -----
 * Last Modified: 16/10/22 21:43
 * Modified By: JYewman
 * -----
 * Copyright (c) 2022 goSysten Solutions Limited
 */

#include <FastLED.h>
#include <WiFi.h>
#include <WiFiManager.h>

const char *project = "LED Controller";
WiFiManager wifiManager;

void setup()
{
    Serial.begin(115200);
    wifiManager.setMinimumSignalQuality(1);

    if (!wifiManager.autoConnect(project))
    {
        Serial.println("Failed to connect to WiFi");
        delay(3000);
        ESP.restart();
        delay(5000);
    }

    Serial.println("");
    Serial.println("WiFi Connection Established");
}

void loop() {}