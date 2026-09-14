#include "weight.h"

double weight_to_gram(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value / 1000;
        case 3: return value * 1000;
        case 4: return value * 1000000;
        case 5: return value * 28.3495;
        case 6: return value * 453.592;
        default: return -1;
    }
}

double gram_to_weight(double value, int unit) {
    switch(unit) {
        case 1: return value;
        case 2: return value * 1000;
        case 3: return value / 1000;
        case 4: return value / 1000000;
        case 5: return value / 28.3495;
        case 6: return value / 453.592;
        default: return -1;
    }
}

const char* weight_unit_name(int unit) {
    switch(unit) {
        case 1: return "g";
        case 2: return "mg";
        case 3: return "kg";
        case 4: return "t";
        case 5: return "oz";
        case 6: return "lb";
        default: return "?";
    }
}
