#ifndef PRESSURE_H
#define PRESSURE_H

double pressure_to_pascal(double value, int unit);
double pascal_to_pressure(double value, int unit);
const char* pressure_unit_name(int unit);

#endif