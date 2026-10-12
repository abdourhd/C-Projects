#include <stdio.h>

#include "converter.h"
#include "history.h"
#include "input.h"
#include "color.h"
#include "length.h"
#include "temperature.h"
#include "time.h"
#include "volume.h"
#include "weight.h"
#include "area.h"
#include "speed.h"
#include "pressure.h"
#include "energy.h"
#include "data.h"


void display_title(void) {
    printf(BRT_CYN BLD"=============================\n       UNIT CONVERTER       \n=============================\n"RST);
}

int display_menu(void) {
    printf(GRN"\n1. Length\n2. Weight\n3. Temperature\n4. Time\n5. Volume\n6. Area\n7. Speed\n8. Pressure\n9. Energy\n10. Data-Storage\n"RST BRT_YEL"\n11. History\n0. Exit\n"RST);

    int category = get_int(BRT_RED"\nChoose a category: "RST, 0, 11);
    return category;
}

void length_menu(void) {
    int from, to;
    double value, meters, result;

    printf(CYN BLD"\n========== LENGTH ==========\n"RST BRT_GRN"1. Meter\n2. Millimeter\n3. Centimeter\n4. Kilometer\n5. Inch\n6. Foot\n7. Yard\n8. Mile"RST BRT_YEL"\n\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 8);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 8);
    if (to == 0)
        return;

    value = get_double("Enter value: ");

    meters = length_to_meter(value, from);
    result = meter_to_length(meters, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, length_unit_name(from), result, length_unit_name(to));
    save_conversion("./data/history.txt", value, length_unit_name(from), result, length_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}

void temperature_menu(void) {
    int from, to;
    double value, celsius, result;

    printf(CYN BLD"\n======== TEMPERATURE ========\n"RST BRT_GRN"1. Celsiuis\n2. Fahrenheit\n3. Kelvin\n"RST BRT_YEL"\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 3);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 3);
    if (to == 0)
        return;

    value = get_double("Enter value: ");

    celsius = temperature_to_celsius(value, from);
    result = celsius_to_temperature(celsius, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, temperature_unit_name(from), result, temperature_unit_name(to));
    save_conversion("./data/history.txt", value, temperature_unit_name(from), result, temperature_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}

void time_menu(void) {
    int from, to;
    double value, second, result;

    printf(CYN BLD"\n=========== TIME ===========\n"RST BRT_GRN"1. Second\n2. Minute\n3. Hour\n4. Day\n"RST BRT_YEL"\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 4);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 4);
    if (to == 0)
        return;

    value = get_double("Enter value: ");

    second = time_to_second(value, from);
    result = second_to_time(second, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, time_unit_name(from), result, time_unit_name(to));
    save_conversion("./data/history.txt", value, time_unit_name(from), result, time_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}

void volume_menu(void) {
    int from, to;
    double value, liter, result;

    printf(CYN BLD"\n========== VOLUME ==========\n"RST BRT_GRN"1. Liter\n2. Millilter\n3. Centiliter\n4. Cubic centimeter\n5. Cubic meter\n6. Gallon\n7. Cup\n8. Fluid ounce\n"RST BRT_YEL"\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 8);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 8);
    if (to == 0)
        return;

    value = get_double("Enter value: ");

    liter = volume_to_liter(value, from);
    result = liter_to_volume(liter, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, volume_unit_name(from), result, volume_unit_name(to));
    save_conversion("./data/history.txt", value, volume_unit_name(from), result, volume_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}

void weight_menu(void) {
    int from, to;
    double value, gram, result;

    printf(CYN BLD"\n========== WEIGHT ==========\n"RST BRT_GRN"1. Gram\n2. Milligram\n3. Kilogram\n4. Metric ton\n5. Ounce\n6. Pound\n"RST BRT_YEL"\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 6);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 6);
    if (to == 0)
        return;

    value = get_double("Enter value: ");

    gram = weight_to_gram(value, from);
    result = gram_to_weight(gram, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, weight_unit_name(from), result, weight_unit_name(to));
    save_conversion("./data/history.txt", value, weight_unit_name(from), result, weight_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}

void area_menu(void) {
    int from, to;
    double value, squaremeter, result;

    printf(CYN BLD"\n=========== AREA ===========\n"RST BRT_GRN"1. Square meter\n2. Square millimeter\n3. Square centimeter\n4. Square kilometer\n5. Square inch\n6. Square foot\n7. Square yard\n8. Square mile\n9. Hectare\n10. Acre\n"RST BRT_YEL"\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 10);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 10);
    if (to == 0)
        return;

    value = get_double("Enter value: ");

    squaremeter = area_to_squaremeter(value, from);
    result = squaremeter_to_area(squaremeter, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, area_unit_name(from), result, area_unit_name(to));
    save_conversion("./data/history.txt", value, area_unit_name(from), result, area_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}

void speed_menu(void) {
    int from, to;
    double value, meterpersecond, result;

    printf(CYN BLD"\n=========== SPEED ===========\n"RST BRT_GRN"1. Meter per second\n2. Kilometer per hour\n3. mile per hour\n4. Foot per second\n5. Knot\n6. Centimeter per second\n7. Kilometer per second\n8. Mile per second\n"RST BRT_YEL"\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 8);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 8);
    if (to == 0)
        return;

    value = get_double("Enter value: ");
    meterpersecond = speed_to_meterpersecond(value, from);
    result = meterpersecond_to_speed(meterpersecond, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, speed_unit_name(from), result, speed_unit_name(to));
    save_conversion("./data/history.txt", value, speed_unit_name(from), result, speed_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}

void pressure_menu(void) {
    int from, to;
    double value, pascal, result;

    printf(CYN BLD"\n========= PRESSURE =========\n"RST BRT_GRN"1. Pascal\n2. Kilopascal\n3. Megapascal\n4. Bar\n5. Millibar\n6. Atmosphere\n7. PSI\n8. Millimetres of mercury\n"RST BRT_YEL"\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 8);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 8);
    if (to == 0)
        return;

    value = get_double("Enter value: ");

    pascal = pressure_to_pascal(value, from);
    result = pascal_to_pressure(pascal, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, pressure_unit_name(from), result, pressure_unit_name(to));
    save_conversion("./data/history.txt", value, pressure_unit_name(from), result, pressure_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}

void energy_menu(void) {
    int from, to;
    double value, joule, result;

    printf(CYN BLD"\n========== ENERGY ==========\n"RST BRT_GRN"1. joule\n2. Kilojoule\n3. Megajoule\n4. Calorie\n5. Kilocalorie\n6. Watt-hour\n7. Kilowatt-hour\n8. British thermal unit\n"RST BRT_YEL"\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 8);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 8);
    if (to == 0)
        return;

    value = get_double("Enter value: ");

    joule = energy_to_joule(value, from);
    result = joule_to_energy(joule, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, energy_unit_name(from), result, energy_unit_name(to));
    save_conversion("./data/history.txt", value, energy_unit_name(from), result, energy_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}

void data_menu(void) {
    int from, to;
    double value, byte, result;

    printf(CYN BLD"\n======= DATA-STORAGE =======\n"RST BRT_GRN"1. Bit\n2. Byte\n3. Kilobyte\n4. Megabyte\n5. Gigabyte\n6. Terabyte\n7. Petabyte\n8. Kibibyte\n9. Mebibyte\n10. Gibibyte\n"RST BRT_YEL"\n0. Back\n"RST);

    from = get_int("Convert FROM: ", 0, 10);
    if (from == 0)
        return;
    
    to = get_int("Convert TO: ", 0, 10);
    if (to == 0)
        return;

    value = get_double("Enter value: ");

    byte = data_to_byte(value, from);
    result = byte_to_data(byte, to);

    printf(GRN BLD"\nResult: %.2f %s = %.2f %s\n"RST, value, data_unit_name(from), result, data_unit_name(to));
    save_conversion("./data/history.txt", value, data_unit_name(from), result, data_unit_name(to));
    printf(CYN BLD"\n===========================\n"RST);
}