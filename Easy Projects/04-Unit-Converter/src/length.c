#include "length.h"

double length_to_meter(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value * 1000;
        case 3: return value * 100;
        case 4: return value / 1000;
        case 5: return value / 39.3701;
        case 6: return value / 3.281;
        case 7: return value / 1.09361;
        case 8: return value * 1609.34;
        default: return -1;
    }
}

double meter_to_length(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value / 1000;
        case 3: return value / 100;
        case 4: return value * 1000;
        case 5: return value * 39.3701;
        case 6: return value * 3.281;
        case 7: return value * 1.09361;
        case 8: return value / 1609.34;
        default: return -1;
    }
}

const char* length_unit_name(int unit) {
    switch (unit) {
        case 1: return "m";
        case 2: return "mm";
        case 3: return "cm";
        case 4: return "km";
        case 5: return "in";
        case 6: return "ft";
        case 7: return "yd";
        case 8: return "mi";
        default: return "?";
    }
}