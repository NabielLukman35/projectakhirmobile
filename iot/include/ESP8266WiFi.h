#ifndef ESP8266WIFI_H
#define ESP8266WIFI_H

#include "Arduino.h"

#define WL_CONNECTED 3
#define WL_NO_SHIELD 255
#define WL_IDLE_STATUS 0
#define WL_NO_SSID_AVAIL 1
#define WL_SCAN_COMPLETED 2
#define WL_CONNECT_FAILED 4
#define WL_CONNECTION_LOST 5
#define WL_DISCONNECTED 6

class IPAddress {
public:
    String toString() const { return "192.168.1.1"; }
};

inline std::ostream& operator<<(std::ostream& os, const IPAddress&) { return os; }

class ESP8266WiFiClass {
public:
    void begin(const char* ssid, const char* pass = nullptr) { (void)ssid; (void)pass; }
    int status() { return WL_CONNECTED; }
    IPAddress localIP() { return IPAddress(); }
    void reconnect() {}
    void disconnect(bool wifioff = false) { (void)wifioff; }
};

extern ESP8266WiFiClass WiFi;

#endif // ESP8266WIFI_H
