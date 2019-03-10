#ifndef STATE_FACTORY_H
#define STATE_FACTORY_H

#include "State.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define STATE_SYNC_TIME_DISABLED 0
#define STATE_SYNC_TIME_ENABLED  1

#define STATE_PRIME_NUMBERS_DISABLED 2
#define STATE_PRIME_NUMBERS_ENABLED  3

#define STATE_ECHO_1_TIME 4
#define STATE_ECHO_1_NOTE 5

#define STATE_ECHO_2_TIME 6
#define STATE_ECHO_2_NOTE 7

#define STATE_MODE_PONG   8
#define STATE_MODE_DUAL   9
#define STATE_MODE_RHYTM  10
#define STATE_MODE_SINGLE 11

#define STATE_BYPASS_DISABLED 12
#define STATE_BYPASS_ENABLED  13

#define STATE_STYLE_TAPE_DISABLED 14
#define STATE_STYLE_TAPE_STUDIO   15
#define STATE_STYLE_TAPE_CHEAP    16
#define STATE_STYLE_TAPE_TUBE     17
#define STATE_STYLE_TAPE_MASTER   18

#define STATE_STYLE_ECHO_DISABLED   19
#define STATE_STYLE_ECHO_PLEX       20
#define STATE_STYLE_ECHO_SPACE      21
#define STATE_STYLE_ECHO_TEL_RAY    22
#define STATE_STYLE_ECHO_BINSONETTE 23

#define STATE_STYLE_BBD_DISABLED   24
#define STATE_STYLE_BBD_MEMORY_MAN 25
#define STATE_STYLE_BBD_ANALOG     26
#define STATE_STYLE_BBD_AM_RADIO   27
#define STATE_STYLE_BBD_DM_2       28

#define STATE_STYLE_BIAS_DISABLED    29
#define STATE_STYLE_BIAS_TRANSMITTER 30
#define STATE_STYLE_BIAS_DISTORTED   31
#define STATE_STYLE_BIAS_SATURATED   32
#define STATE_STYLE_BIAS_QUEEKED     33

#define STATE_STYLE_CHORUS_DISABLED 34
#define STATE_STYLE_CHORUS_CE_1     35
#define STATE_STYLE_CHORUS_ANALOG   36
#define STATE_STYLE_CHORUS_VIBRATO  37
#define STATE_STYLE_CHORUS_DIGITAL  38

#define STATE_STYLE_ATMO_DISABLED   39
#define STATE_STYLE_ATMO_AMBIENT    40
#define STATE_STYLE_ATMO_VERBED     41
#define STATE_STYLE_ATMO_DIFFUSED   42
#define STATE_STYLE_ATMO_SPLATTERED 43

// AMOUNT OF STATES
#define STATES 44

class StateFactory {
private:
    static State* states[STATES];
public:
    static void initialize();
    static State* get(int key);
};

#endif
