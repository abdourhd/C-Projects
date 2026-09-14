#include "speed.h"

double speed_to_meterpersecond(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value / 3.6;
        case 3: return value / 2.237;
        case 4: return value / 3.281;
        case 5: return value / 1.994;
        case 6: return value / 100;
        case 7: return value * 1000;
        case 8: return value * 1609.34;
        default: return -1;
    }
}

double meterpersecond_to_speed(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value * 3.6;
        case 3: return value * 2.237;
        case 4: return value * 3.281;
        case 5: return value * 1.994;
        case 6: return value * 100;
        case 7: return value / 1000;
        case 8: return value / 1609.34;
        default: return -1;
    }
}

const char* speed_unit_name(int unit) {
    switch(unit) {
        case 1: return "m/s";
        case 2: return "km/h";
        case 3: return "mph";
        case 4: return "ft/s";
        case 5: return "kn";
        case 6: return "cm/s";
        case 7: return "km/s";
        case 8: return "mi/s";
        default: return "?";
    }
}