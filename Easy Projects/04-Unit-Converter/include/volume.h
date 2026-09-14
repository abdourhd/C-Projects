#ifndef VOLUME_H
#define VOLUME_H

double volume_to_liter(double value, int unit);
double liter_to_volume(double value, int unit);
const char* volume_unit_name(int unit);

#endif