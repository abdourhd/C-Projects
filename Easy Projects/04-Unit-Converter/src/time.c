#include "time.h"

double time_to_second(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value * 60;
        case 3: return value * 3600;
        case 4: return value * 86400;
        default: return -1;
    }
}

double second_to_time(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value / 60;
        case 3: return value / 3600;
        case 4: return value / 86400;
        default: return -1;
    }
}

const char* time_unit_name(int unit) {
    switch(unit) {
        case 1: return "s";
        case 2: return "min";
        case 3: return "h";
        case 4: return "day";
        default: return "?";
    }
}