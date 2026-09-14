#include "volume.h"

double volume_to_liter(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value / 1000;
        case 3: return value / 100;
        case 4: return value / 1000;
        case 5: return value * 1000;
        case 6: return value * 3.785;
        case 7: return value / 4.227;
        case 8: return value / 33.814;
        default: return -1;
    }
}

double liter_to_volume(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value * 1000;
        case 3: return value * 100;
        case 4: return value * 1000;
        case 5: return value / 1000;
        case 6: return value / 3.785;
        case 7: return value * 4.227;
        case 8: return value * 33.814;
        default: return -1;
    }
}

const char* volume_unit_name(int unit) {
    switch(unit) {
        case 1: return "L";
        case 2: return "mL";
        case 3: return "cL";
        case 4: return "cm3";
        case 5: return "m3";
        case 6: return "gal";
        case 7: return "cup";
        case 8: return "fl oz";
        default: return "?";
    }
}
