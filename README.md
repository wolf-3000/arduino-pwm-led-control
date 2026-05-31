# Arduino PWM LED Brightness Control

This project uses a potentiometer to control LED brightness using PWM on an Arduino Uno.

## Features
- Analog input reading
- PWM output control
- Brightness scaling using map()
- Output limiting using constrain()
- Serial monitoring for debugging

## Components Used
- Arduino Uno
- Potentiometer
- LED
- 220Ω resistor
- Breadboard

## How It Works
The potentiometer value is read using analogRead().
The value is mapped from 0–1023 to a PWM range of 0–255.

Brightness is constrained between 30 and 200 to:
- prevent the LED from turning fully off
- avoid excessive brightness

## Concepts Learned
- ADC (Analog to Digital Conversion)
- PWM (Pulse Width Modulation)
- Serial debugging
- Signal scaling

## Future Improvements
- Remove delay() using millis()
- Add multiple LEDs
- Implement smoothing/filtering
- Convert into a reusable LED driver module
