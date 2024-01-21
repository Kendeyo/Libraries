#ifndef PULSECOUNT_H_INCLUDED
#define PULSECOUNT_H_INCLUDED

#include <Wire.h>
#include <Arduino.h>

class PulseCount {
private:
    int sensor_address = 0x08;
public:
    void init();
    int getPulseVal();


};


#endif // PULSECOUNT_H_INCLUDED
