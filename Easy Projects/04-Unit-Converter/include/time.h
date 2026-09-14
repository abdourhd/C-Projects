#ifndef TIME_H
#define TIME_H

double time_to_second(double value, int unit);
double second_to_time(double value, int unit);
const char* time_unit_name(int unit);

#endif