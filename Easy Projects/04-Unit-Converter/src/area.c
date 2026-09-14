#include "area.h"

double area_to_squaremeter(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value / 1000000;
        case 3: return value / 10000;
        case 4: return value * 1000000;
        case 5: return value / 1550;
        case 6: return value / 10.7639;
        case 7: return value / 1.196;
        case 8: return value * 2589988.1103;
        case 9: return value * 10000;
        case 10: return value * 4046.86;
        default: return -1;
    }
}

double squaremeter_to_area(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value * 1000000;
        case 3: return value * 10000;
        case 4: return value / 1000000;
        case 5: return value * 1550;
        case 6: return value * 10.7639;
        case 7: return value * 1.196;
        case 8: return value / 2589988.1103;
        case 9: return value / 10000;
        case 10: return value / 4046.86;
        default: return -1;
    }
}

const char* area_unit_name(int unit) {
    switch(unit) {
        case 1: return "m2";
        case 2: return "mm2";
        case 3: return "cm2";
        case 4: return "km2";
        case 5: return "in2";
        case 6: return "ft2";
        case 7: return "yd2";
        case 8: return "mi2";
        case 9: return "ha";
        case 10: return "ac";
        default: return "?";
    }
}