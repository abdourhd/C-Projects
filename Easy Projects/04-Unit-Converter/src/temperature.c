#include "temperature.h"

double temperature_to_celsius(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return (value - 32) / 1.8;
        case 3: return value - 273.15;
        default: return -1;
    }
}

double celsius_to_temperature(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value * 1.8 + 32;
        case 3: return value + 273.15;
        default: return -1;
    }
}

const char* temperature_unit_name(int unit) {
    switch(unit) {
        case 1: return "°C";
        case 2: return "°F";
        case 3: return "°K";
        default: return "?";
    }
}