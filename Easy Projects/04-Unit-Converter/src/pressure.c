#include "pressure.h"

double pressure_to_pascal(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value * 1000;
        case 3: return value * 1000000;
        case 4: return value * 100000;
        case 5: return value * 100;
        case 6: return value * 101325;
        case 7: return value * 6894.757;
        case 8: return value * 133.322;
        default: return -1;
    }
}

double pascal_to_pressure(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value / 1000;
        case 3: return value / 1000000;
        case 4: return value / 100000;
        case 5: return value / 100;
        case 6: return value / 101325;
        case 7: return value / 6894.757;
        case 8: return value / 133.322;
        default: return -1;
    }
}

const char* pressure_unit_name(int unit) {
    switch(unit) {
        case 1: return "Pa";
        case 2: return "kPa";
        case 3: return "MPa";
        case 4: return "bar";
        case 5: return "mbar";
        case 6: return "atm";
        case 7: return "psi";
        case 8: return "mmHg";
        default: return "?";
    }
}