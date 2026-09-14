#ifndef TEMPERATURE_H
#define TEMPERATURE_H

double temperature_to_celsius(double value, int unit);
double celsius_to_temperature(double value, int unit);
const char* temperature_unit_name(int unit);

#endif