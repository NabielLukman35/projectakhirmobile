#ifndef ADAFRUIT_GFX_H
#define ADAFRUIT_GFX_H

#include "Arduino.h"

class Adafruit_GFX {
public:
    Adafruit_GFX(int16_t w, int16_t h) { (void)w; (void)h; }
    virtual ~Adafruit_GFX() {}
    void setTextSize(uint8_t s) { (void)s; }
    void setTextColor(uint16_t c) { (void)c; }
    void setCursor(int16_t x, int16_t y) { (void)x; (void)y; }
    void print(const char* s) { (void)s; }
    void print(float f, int digits = 2) { (void)f; (void)digits; }
    void print(const String& s) { (void)s; }
    void println(const char* s = "") { (void)s; }
    void println(float f, int digits = 2) { (void)f; (void)digits; }
    void println(const String& s) { (void)s; }
};

#endif // ADAFRUIT_GFX_H
