/*
*  Description : Codebase for  working with the Pulse Counter Sensor
*  Author       : Kennedy Odeyo
*
*  (c) Phinalabs
*  Licence : MIT
*/


#include "PulseCount.h"  // Including the headerfile

PulseCount pulse_sensor; //Creating an object of the Class

void setup() {
  pulse_sensor.init(); //Initialising the sensor
  Serial.begin(115200); // Start serial communication for debugging
}

void loop() {
  uint16_t value = pulse_sensor.getPulseVal(); //gets the pulse value
  Serial.println(value);                       //prints the pulse value
  delay(1000); //delay to prevent continuous reading
}




 
