#ifndef TWO_WIRE_H
#define TWO_WIRE_H

#include "Arduino.h"

class TwoWire {
public:
    void begin(int sda = -1, int scl = -1) { (void)sda; (void)scl; }
    void beginTransmission(uint8_t addr) { (void)addr; }
    uint8_t endTransmission(bool sendStop = true) { (void)sendStop; return 0; }
    size_t write(uint8_t data) { (void)data; return 1; }
    uint8_t requestFrom(uint8_t addr, uint8_t quantity) { (void)addr; (void)quantity; return 0; }
    int read(void) { return -1; }
    int available(void) { return 0; }
};

extern TwoWire Wire;

#endif // TWO_WIRE_H
