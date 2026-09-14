#include <stdio.h>

#include "converter.h"
#include "length.h"
#include "temperature.h"
#include "time.h"
#include "volume.h"
#include "weight.h"

void display_title(void) {
    printf("=============================\n       UNIT CONVERTER       \n=============================\n");
}

int display_menu(void) {
    printf("\n\n1. Length\n2. Weight\n3. Temperature\n4. Time\n5. Volume\n\n0. Exit\n\nChoose a category: ");

    int category;
    scanf("%d", &category);

    return category;
}

void length_menu(void) {
    int from, to;
    double value, meters, result;

    printf("\n========== LENGTH ==========\n1. Meter\n2. Millimeter\n3. Centimeter\n4. Kilometer\n5. Inch\n6. Foot\n7. Yard\n8. Mile\n\n0. Back\n");

    printf("\nConvert FROM: ");
    scanf("%d", &from);

    if (from == 0)
        return;

    printf("Convert TO: ");
    scanf("%d", &to);

    if (to == 0)
        return;

    printf("Enter value: ");
    scanf("%lf", &value);

    meters = length_to_meter(value, from);
    result = meter_to_length(meters, to);

    printf("\nResult: %.2f %s = %.2f %s\n", value, length_unit_name(from), result, length_unit_name(to));
}

void temperature_menu(void) {
    int from, to;
    double value, celsius, result;

    printf("\n======== TEMPERATURE ========\n1. Celsiuis\n2. Fahrenheit\n3. Kelvin\n\n0. Back\n");

    printf("\nConvert FROM: ");
    scanf("%d", &from);

    if (from == 0)
        return;

    printf("Convert TO: ");
    scanf("%d", &to);

    if (to == 0)
        return;

    printf("Enter value: ");
    scanf("%lf", &value);

    celsius = temperature_to_celsius(value, from);
    result = celsius_to_temperature(celsius, to);

    printf("\nResult: %.2f %s = %.2f %s\n", value, temperature_unit_name(from), result, temperature_unit_name(to));
}

void time_menu(void) {
    int from, to;
    double value, second, result;

    printf("\n=========== TIME ===========\n1. Second\n2. Minute\n3. Hour\n4. Day\n\n0. Back\n");

    printf("\nConvert FROM: ");
    scanf("%d", &from);

    if (from == 0)
        return;

    printf("Convert TO: ");
    scanf("%d", &to);

    if (to == 0)
        return;

    printf("Enter value: ");
    scanf("%lf", &value);

    second = time_to_second(value, from);
    result = second_to_time(second, to);

    printf("\nResult: %.2f %s = %.2f %s\n", value, time_unit_name(from), result, time_unit_name(to));
}

void volume_menu(void) {
    int from, to;
    double value, liter, result;

    printf("\n========== VOLUME ==========\n1. Liter\n2. Millilter\n3. Centiliter\n4. Cubic centimeter\n5. Cubic meter\n6. Gallon\n7. Cup\n8. Fluid ounce\n\n0. Back\n");

    printf("\nConvert FROM: ");
    scanf("%d", &from);

    if (from == 0)
        return;

    printf("Convert TO: ");
    scanf("%d", &to);

    if (to == 0)
        return;

    printf("Enter value: ");
    scanf("%lf", &value);

    liter = volume_to_liter(value, from);
    result = liter_to_volume(liter, to);

    printf("\nResult: %.2f %s = %.2f %s\n", value, volume_unit_name(from), result, volume_unit_name(to));
}

void weight_menu(void) {
    int from, to;
    double value, gram, result;

    printf("\n========== WEIGHT ==========\n1. Gram\n2. Milligram\n3. Kilogram\n4. Metric ton\n5. Ounce\n6. Pound\n\n0. Back\n");

    printf("\nConvert FROM: ");
    scanf("%d", &from);

    if (from == 0)
        return;

    printf("Convert TO: ");
    scanf("%d", &to);

    if (to == 0)
        return;

    printf("Enter value: ");
    scanf("%lf", &value);

    gram = weight_to_gram(value, from);
    result = gram_to_weight(gram, to);

    printf("\nResult: %.2f %s = %.2f %s\n", value, weight_unit_name(from), result, weight_unit_name(to));
}