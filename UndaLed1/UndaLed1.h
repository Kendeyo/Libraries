#ifndef UNDALED1_H_INCLUDED
#define UNDALED1_H_INCLUDED

#include <Arduino.h>
#include <Wire.h>
class UndaLed {
 private:
     int sensor_address = 0x0A;
 public:
    void init();
    void writeVal(int mode,int val);



};

#endif // UNDALED1_H_INCLUDED
