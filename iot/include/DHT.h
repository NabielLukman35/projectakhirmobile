#ifndef DHT_H
#define DHT_H

#include "Arduino.h"

#define DHT11 11
#define DHT22 22
#define DHT21 21
#define AM2301 21

class DHT {
public:
    DHT(uint8_t pin, uint8_t type, uint8_t count = 6) { (void)pin; (void)type; (void)count; }
    void begin(uint8_t usec = 55) { (void)usec; }
    float readTemperature(bool S = false, bool force = false) { (void)S; (void)force; return 25.0f; }
    float readHumidity(bool force = false) { (void)force; return 60.0f; }
};

#endif // DHT_H
