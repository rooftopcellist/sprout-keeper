# Sprout Keeper
Python and Arduino Library for automating a greenhouse

## How to Connect

To SSH into the raspberry pi device:

```bash
ssh chadams@raspberrypi
```

When prompted, provide the password.

> Note: You need to be on the same home network or be connected through a VPN for this to work.

## Learning Projects

#### Module 1: LEDs with Arduino and Raspberry Pi

* https://www.instructables.com/Connect-Your-Raspberry-Pi-and-Arduino-Uno/

#### Module 2: Arduino Temperature Sensor affecting LEDs

* Project 03 in the Arduino book

#### Module 3: Color Mixing Lamp

#### Module 4: Temperature Lava Lamp

## End Goal

* 1' x 2' indoor planter with temperature, humidity, and pH sensors.
* Self watering
* Self misting if needed
* Alerts
* Dashboard and or integration with HomeAssistant

## Roadmap

- [ ] Try to convert Arduino code to pyfirmata so it could all be done in python
- [ ] Work through learning modules in Arduino workbook
- [ ] Design the planter box and map out integration points for each sensor, controller and wires.
- [ ] Build planter box
- [ ] Build in smart sensors
- [ ] Build a Dashboard
    - Temperature
    - Humidity
    - Water reservoir level
    - Soil pH
- [ ] Set up alerting/notification system
    - Water reservoir level is low
- [ ] Automated remediation (watering, misting, pH adjustment, etc)
- [ ] Camera hooked up to AI processing which estimates what produce is available for harvest.
    - [ ] Diagnose unhealthy plants and suggest remediation steps. (ChatGPT or local LLM integration)


## Hardware

* Grow Lights
* Temperature sensor
* Humidity sensor
* Multiple moisture sensors
* pH sensor
* Micro SD card for raspberry pi
* Irrigation system and pump