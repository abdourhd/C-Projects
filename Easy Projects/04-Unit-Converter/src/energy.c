#include "energy.h"

double energy_to_joule(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value * 1000;
        case 3: return value * 1000000;
        case 4: return value * 4.184;
        case 5: return value * 4184;
        case 6: return value * 3600;
        case 7: return value * 3600000;
        case 8: return value * 1055.056;
        default: return -1;
    }
}

double joule_to_energy(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value / 1000;
        case 3: return value / 1000000;
        case 4: return value / 4.184;
        case 5: return value / 4184;
        case 6: return value / 3600;
        case 7: return value / 3600000;
        case 8: return value / 1055.056;
        default: return -1;
    }
}

const char* energy_unit_name(int unit) {
    switch (unit) {
        case 1: return "J";
        case 2: return "kJ";
        case 3: return "MJ";
        case 4: return "cal";
        case 5: return "kcal";
        case 6: return "Wh";
        case 7: return "kWh";
        case 8: return "BTU";
        default: return "?";
    }
}