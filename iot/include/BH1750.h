#ifndef BH1750_H
#define BH1750_H

#include "Arduino.h"
#include "Wire.h"

class BH1750 {
public:
    enum Mode {
        UNCONFIGURED = 0,
        CONTINUOUS_HIGH_RES_MODE = 0x10,
        CONTINUOUS_HIGH_RES_MODE_2 = 0x11,
        CONTINUOUS_LOW_RES_MODE = 0x13,
        ONE_TIME_HIGH_RES_MODE = 0x20,
        ONE_TIME_HIGH_RES_MODE_2 = 0x21,
        ONE_TIME_LOW_RES_MODE = 0x23
    };

    BH1750(uint8_t addr = 0x23) { (void)addr; }
    bool begin(Mode mode = CONTINUOUS_HIGH_RES_MODE, TwoWire* w = &Wire) { (void)mode; (void)w; return true; }
    float readLightLevel() { return 500.0f; }
};

#endif // BH1750_H
