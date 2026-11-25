#ifndef ARDUINO_H
#define ARDUINO_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifdef __cplusplus
#include <string>
#include <iostream>
typedef std::string String;
#endif

#define HIGH 0x1
#define LOW  0x0
#define INPUT 0x0
#define OUTPUT 0x1
#define INPUT_PULLUP 0x2

// NodeMCU Pin Mapping
#define D0 16
#define D1 5
#define D2 4
#define D3 0
#define D4 2
#define D5 14
#define D6 12
#define D7 13
#define D8 15
#define D9 3
#define D10 1

#define LED_BUILTIN 2

#ifndef F
#define F(str) (str)
#endif

#ifndef isnan
#define isnan(x) std::isnan(x)
#endif

inline unsigned long millis(void) { return 0; }
inline unsigned long micros(void) { return 0; }
inline void delay(unsigned long ms) { (void)ms; }
inline void delayMicroseconds(unsigned int us) { (void)us; }
inline void pinMode(uint8_t pin, uint8_t mode) { (void)pin; (void)mode; }
inline void digitalWrite(uint8_t pin, uint8_t val) { (void)pin; (void)val; }
inline int digitalRead(uint8_t pin) { (void)pin; return 0; }
inline int analogRead(uint8_t pin) { (void)pin; return 0; }

class HardwareSerial {
public:
    void begin(unsigned long baud) { (void)baud; }
    void print(const char* s) { (void)s; }
    void print(int n) { (void)n; }
    void print(float f, int digits = 2) { (void)f; (void)digits; }
    void print(const String& s) { (void)s; }
    void println(const char* s = "") { (void)s; }
    void println(int n) { (void)n; }
    void println(float f, int digits = 2) { (void)f; (void)digits; }
    void println(const String& s) { (void)s; }
};

extern HardwareSerial Serial;

#endif // ARDUINO_H
