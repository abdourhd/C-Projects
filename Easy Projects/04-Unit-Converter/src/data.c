#include "data.h"

double data_to_byte(double value, int unit) {
    switch(unit) {
        case 1: return value / 8;
        case 2: return value;
        case 3: return value * 1000;
        case 4: return value * 1000000;
        case 5: return value * 1e9;
        case 6: return value * 1e12;
        case 7: return value * 1e15;
        case 8: return value * 1024;
        case 9: return value * 1048576;
        case 10: return value * 1073741824;
        default: return -1;
    }
}

double byte_to_data(double value, int unit) {
    switch(unit) {
        case 1: return value * 8;
        case 2: return value;
        case 3: return value / 1000;
        case 4: return value / 1000000;
        case 5: return value / 1e9;
        case 6: return value / 1e12;
        case 7: return value / 1e15;
        case 8: return value / 1024;
        case 9: return value / 1048576;
        case 10: return value / 1073741824;
        default: return -1;
    }
}

const char* data_unit_name(int unit) {
    switch(unit) {
        case 1: return "bit";
        case 2: return "B";
        case 3: return "KB";
        case 4: return "MB";
        case 5: return "GB";
        case 6: return "TB";
        case 7: return "PB";
        case 8: return "KiB";
        case 9: return "MiB";
        case 10: return "GiB";
        default: return "?";
    }
}