/*
*  Description : Codebase for  working with the LED driver IC
*  Author       : Kennedy Odeyo
*
*  (c) Phinalabs
*  Licence : MIT
*/

#include "UndaLed1.h" // Including the headerfile

UndaLed sensor;  //creating an object of the UndaLed Class
 
void setup() {
    Serial.begin(9600);
    sensor.init();  //Initializing the commmunication
    
}

void loop() {

    sensor.writeVal(3,21); //sending the mode and value to be displayed. Mode 3 worked perfectly well
    delay(1000);
}
