#ifndef DATA_H
#define DATA_H

double data_to_byte(double value, int unit);
double byte_to_data(double value, int unit);
const char* data_unit_name(int unit);

#endif