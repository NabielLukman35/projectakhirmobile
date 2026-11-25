#ifndef FIREBASE_ESP8266_H
#define FIREBASE_ESP8266_H

#include "Arduino.h"

class FirebaseData {
public:
    String errorReason() { return ""; }
};

class FirebaseESP8266 {
public:
    void begin(const String& host, const String& auth) { (void)host; (void)auth; }
    void reconnectWiFi(bool reconnect) { (void)reconnect; }
    bool setInt(FirebaseData& data, const String& path, int val) { (void)data; (void)path; (void)val; return true; }
    bool setFloat(FirebaseData& data, const String& path, float val) { (void)data; (void)path; (void)val; return true; }
    bool setString(FirebaseData& data, const String& path, const String& val) { (void)data; (void)path; (void)val; return true; }
    bool setBool(FirebaseData& data, const String& path, bool val) { (void)data; (void)path; (void)val; return true; }
    bool setFloat(FirebaseData& data, const char* path, float val) { (void)data; (void)path; (void)val; return true; }
    bool setInt(FirebaseData& data, const char* path, int val) { (void)data; (void)path; (void)val; return true; }
};

extern FirebaseESP8266 Firebase;

#endif // FIREBASE_ESP8266_H
