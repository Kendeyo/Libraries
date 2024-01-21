

#include <stdio.h>
#include "PulseCount.h"


void PulseCount::init(){
      Wire.begin();  // Initialize I2C communication
}



int PulseCount::getPulseVal(){

    uint16_t val;
    Wire.beginTransmission(sensor_address);

    // Sending the register address to read from
    Wire.write(0x03);

    // End the transmission
    Wire.endTransmission();

    Wire.requestFrom(sensor_address, 2); // Request 2 bytes of data from the device :0x08

  while (Wire.available()) {
    // Read data from the device
    byte highByte = Wire.read(); // Read the most significant byte
    byte lowByte = Wire.read();  // Read the least significant byte

    int data1 = highByte;
    int data2 = lowByte;

    uint16_t val1 = (uint16_t)data1;
    uint16_t val2 = ((uint16_t)data2) << 8;
    val = val1 | val2;

}
  return val;
}


