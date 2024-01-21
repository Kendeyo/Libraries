
#include "UndaLed1.h"
#include <stdio.h>


void UndaLed::init(){
    Wire.begin();


}

void UndaLed::writeVal(int mode,int val){
    // Start communication with the I2C device
    Wire.beginTransmission(sensor_address);

    //Send the register address to write to
    Wire.write(mode);  //3 works well

    //Send the data to be written to the register
    Wire.write(val);

    // End the transmission
    Wire.endTransmission();
}


