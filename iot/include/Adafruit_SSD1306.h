#ifndef ADAFRUIT_SSD1306_H
#define ADAFRUIT_SSD1306_H

#include "Arduino.h"
#include "Wire.h"
#include "Adafruit_GFX.h"

#define SSD1306_SWITCHCAPVCC 0x02
#define BLACK 0
#define WHITE 1
#define INVERSE 2

class Adafruit_SSD1306 : public Adafruit_GFX {
public:
    Adafruit_SSD1306(uint8_t w, uint8_t h, TwoWire* tw = &Wire, int8_t rst_pin = -1)
        : Adafruit_GFX(w, h) { (void)tw; (void)rst_pin; }
    bool begin(uint8_t switchvcc = SSD1306_SWITCHCAPVCC, uint8_t i2caddr = 0x3C, bool reset = true, bool periphBegin = true) {
        (void)switchvcc; (void)i2caddr; (void)reset; (void)periphBegin;
        return true;
    }
    void clearDisplay(void) {}
    void display(void) {}
};

#endif // ADAFRUIT_SSD1306_H
