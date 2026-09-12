#include <stdio.h>

#include "display.h"
#include "length.h"
#include "weight.h"
#include "temperature.h"
#include "time.h"
#include "volume.h"

int main() {
    int category, conversion;
    double value, result;
    display_title();
    do {
        category = display_menu();
        switch(category) {
            case 1:
                conversion = display_length();
                printf("\nEnter value: ");
                scanf("%lf", &value);
                switch(conversion) {
                    case 1:
                        result = meter_to_kilometer(value);
                        printf("\nResult: %.2lf m = %.2lf km\n", value, result);
                        break;

                    case 2:
                        result = kilometer_to_meter(value);
                        printf("\nResult: %.2lf km = %.2lf m\n", value, result);
                        break;

                    case 3:
                        result = meter_to_foot(value);
                        printf("\nResult: %.2lf m = %.2lf ft\n", value, result);
                        break;

                    case 4:
                        result = foot_to_meter(value);
                        printf("\nResult: %.2lf ft = %.2lf m\n", value, result);
                        break;

                    case 5:
                        result = meter_to_mile(kilometer_to_meter(value));
                        printf("\nResult: %.2lf km = %.2lf mi\n", value, result);
                        break;

                    case 6:
                        result = meter_to_kilometer(mile_to_meter(value));
                        printf("\nResult: %.2lf mi = %.2lf km\n", value, result);
                        break;

                    default:
                        printf("\nInvalid conversion\n");
                }
                break;

            case 2:
                conversion = display_weight();
                printf("\nEnter value: ");
                scanf("%lf", &value);
                switch(conversion) {
                    case 1:
                        result = gram_to_kilogram(value);
                        printf("\nResult: %.2lf g = %.2lf kg\n", value, result);
                        break;

                    case 2:
                        result = kilogram_to_gram(value);
                        printf("\nResult: %.2lf kg = %.2lf g\n", value, result);
                        break;

                    case 3:
                        result = gram_to_milligram(value);
                        printf("\nResult: %.2lf g = %.2lf mg\n", value, result);
                        break;

                    case 4:
                        result = milligram_to_gram(value);
                        printf("\nResult: %.2lf mg = %.2lf g\n", value, result);
                        break;

                    case 5:
                        result = gram_to_pound(kilogram_to_gram(value));
                        printf("\nResult: %.2lf kg = %.2lf lb\n", value, result);
                        break;

                    case 6:
                        result = gram_to_kilogram(pound_to_gram(value));
                        printf("\nResult: %.2lf lb = %.2lf kg\n", value, result);
                        break;

                    default:
                        printf("\nInvalid conversion\n");
                }
                break;

            case 3:
                conversion = display_temperature();
                printf("\nEnter value: ");
                scanf("%lf", &value);
                switch(conversion) {
                    case 1:
                        result = celsius_to_fahrenheit(value);
                        printf("\nResult: %.2lf °C = %.2lf °F\n", value, result);
                        break;

                    case 2:
                        result = fahrenheit_to_celsius(value);
                        printf("\nResult: %.2lf °F = %.2lf °C\n", value, result);
                        break;

                    case 3:
                        result = celsius_to_kelvin(value);
                        printf("\nResult: %.2lf °C = %.2lf °K\n", value, result);
                        break;

                    case 4:
                        result = kelvin_to_celsius(value);
                        printf("\nResult: %.2lf °K = %.2lf °C\n", value, result);
                        break;

                    case 5:
                        result = fahrenheit_to_kelvin(value);
                        printf("\nResult: %.2lf °F = %.2lf °K\n", value, result);
                        break;

                    case 6:
                        result = kelvin_to_fahrenheit(value);
                        printf("\nResult: %.2lf °K = %.2lf °F\n", value, result);
                        break;

                    default:
                        printf("\nInvalid conversion\n");
                }
                break;

            case 4:
                conversion = display_time();
                printf("\nEnter value: ");
                scanf("%lf", &value);
                switch(conversion) {
                    case 1:
                        result = second_to_minute(value);
                        printf("\nResult: %.2lf s = %.2lf min\n", value, result);
                        break;

                    case 2:
                        result = minute_to_second(value);
                        printf("\nResult: %.2lf min = %.2lf s\n", value, result);
                        break;

                    case 3:
                        result = second_to_hour(minute_to_second(value));
                        printf("\nResult: %.2lf min = %.2lf h\n", value, result);
                        break;

                    case 4:
                        result = second_to_minute(hour_to_second(value));
                        printf("\nResult: %.2lf h = %.2lf min\n", value, result);
                        break;

                    case 5:
                        result = second_to_hour(value);
                        printf("\nResult: %.2lf s = %.2lf h\n", value, result);
                        break;

                    case 6:
                        result = hour_to_second(value);
                        printf("\nResult: %.2lf h = %.2lf s\n", value, result);
                        break;
                        
                    case 7:
                        result = second_to_day(value);
                        printf("\nResult: %.2lf s = %.2lf day\n", value, result);
                        break;

                    case 8:
                        result = day_to_second(value);
                        printf("\nResult: %.2lf day = %.2lf s\n", value, result);
                        break;

                    default:
                        printf("\nInvalid conversion\n");
                }
                break;

            case 5:
                conversion = display_volume();
                printf("\nEnter value: ");
                scanf("%lf", &value);
                switch(conversion) {
                    case 1:
                        result = liter_to_milliliter(value);
                        printf("\nResult: %.2lf L = %.2lf mL\n", value, result);
                        break;

                    case 2:
                        result = milliliter_to_liter(value);
                        printf("\nResult: %.2lf mL = %.2lf L\n", value, result);
                        break;

                    case 3:
                        result = liter_to_cubicmeter(value);
                        printf("\nResult: %.2lf L = %.2lf m³\n", value, result);
                        break;

                    case 4:
                        result = cubicmeter_to_liter(value);
                        printf("\nResult: %.2lf m³ = %.2lf L\n", value, result);
                        break;

                    case 5:
                        result = liter_to_gallon(value);
                        printf("\nResult: %.2lf L = %.2lf gal\n", value, result);
                        break;

                    case 6:
                        result = gallon_to_liter(value);
                        printf("\nResult: %.2lf gal = %.2lf L\n", value, result);
                        break;

                    default:
                        printf("\nInvalid conversion\n");
                }
                break;

            case 0:
                printf("\nGoodbye!\n");
                break;

            default:
                printf("\nInvalid category!\n");
        }
    } while(category != 0);

    return 0;
}