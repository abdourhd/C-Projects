#ifndef SPEED_H
#define SPEED_H

double speed_to_meterpersecond(double value, int unit);
double meterpersecond_to_speed(double value, int unit);
const char* speed_unit_name(int unit);

#endif