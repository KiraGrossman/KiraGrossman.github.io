// ConstantSpeed.pde
// -*- mode: C++ -*-
//
// Shows how to run AccelStepper in the simplest,
// fixed speed mode with no accelerations
/// \author  Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2009 Mike McCauley
// $Id: ConstantSpeed.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $


#include <AccelStepper.h>


AccelStepper stepper (AccelStepper::DRIVER, 3, 2); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5


// Define pin connections
int button = 6;          // Main control button
int stop_button = 5;     // Emergency stop button
int forward = 12;        // Forward control button
int backward = 13;       // Backward control button
int blue_LED = 9;        // Blue component of LED
int green_LED = 10;      // Green component of LED
int red_LED = 11;        // Red component of LED


// Constants and variables
const float pi = 3.14; 
double flow_rate = 1.0; // Flow rate in mL/min
double dia = 19.27;  // Diameter of the cylinder in mm, large 19.27 mm ,small 14.5mm
double rad = dia / 2.0; // Radius of the cylinder
double area = pow(rad, 2.0) * pi; // Area calculation using A=πr²
double step_speed = (3200000 / (120 * area)) * flow_rate;  // Calculated step speed in steps/s


void setup() {
 // Set pin modes for inputs and outputs
 pinMode(button, INPUT_PULLUP);
 pinMode(stop_button, INPUT_PULLUP);
 pinMode(forward, INPUT_PULLUP);
 pinMode(backward, INPUT_PULLUP);
 pinMode(blue_LED, OUTPUT);
 pinMode(green_LED, OUTPUT);
 pinMode(red_LED, OUTPUT);


 // Stepper motor configuration
 stepper.setMaxSpeed(1000); // Set maximum speed of stepper
 stepper.setSpeed(step_speed);  // Set initial speed based on calculated value


 // Begin Serial communication for debugging
 Serial.begin(9600);


// See the step speed, diameter, and area calculations on the serial monitor to ensure that the calculations are correct
 Serial.println(step_speed);
 Serial.println(dia);
 Serial.println(area);
}


void loop() {
 // Handle main control button logic, occurs when both the on/off buttons are pressed
 if (digitalRead(button) == LOW && digitalRead(stop_button) == HIGH) {
   // Turn LED red (Error or halt state)
   analogWrite(green_LED, 0);
   analogWrite(red_LED, 255);
   analogWrite(blue_LED, 0);
 } else if (digitalRead(button) == LOW) {
   // Button is pressed, set speed to calculated step_speed and run the stepper
   stepper.setSpeed(step_speed);
   stepper.runSpeed();
   // Turn LED green (Running state)
   analogWrite(green_LED, 255);
   analogWrite(red_LED, 0);
   analogWrite(blue_LED, 0);
 } else {
   // Default LED state (Idle or no input), turn LED yellow, occurs when on/off button is not pressed
   analogWrite(red_LED, 255);
   analogWrite(green_LED, 125);
   analogWrite(blue_LED, 0);
 }


 // Forward and backward control logic
 if (digitalRead(forward) == LOW) {
   // If forward button is pressed, move stepper forward at full speed using clockwise rotation
   stepper.setSpeed(1000);
   stepper.runSpeed();
 } else if (digitalRead(backward) == LOW) {
   // If backward button is pressed, move stepper backward at full speed using counterclockwise rotation
   stepper.setSpeed(-1000);
   stepper.runSpeed();
 }
}

