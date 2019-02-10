#ifndef PIN_FACTORY_H
#define PIN_FACTORY_H

#include <ArduinoSTL.h>
#include <map>
#include <Adafruit_MCP3008.h>
#include <PCF8574.h>

#include "Pin.h"

class PinFactory {
private:
    static std::map<String, Pin*> pins;
    static bool notInitialized();
    static void initialize();

    // initialize MCP3008 analog to digital converter
    static Adafruit_MCP3008* analogDigitalConverter;

    // initailize PCF8574 digital I/O expanders
    static PCF8574* ledExpander;
    static PCF8574* ledExpander2;
    static PCF8574* ledExpander3;
    static PCF8574* ledExpander4;
public:
    // interrupts
    static PCF8574* buttonExpander;
    static PCF8574* buttonExpander2;

    static Pin* get(String key);
    static void runIntegratedCircuits();
};

#endif