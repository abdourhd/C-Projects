#include <stdio.h>
#include "temperature.h"

int display_temperature() {
    printf("\n--- Temperature ---\n1. Celsius -> Fahrenheit\n2. Fahrenheit -> Celsius\n3. Celsius -> Kelvin\n4. Kelvin -> Celsius\n5. Fahrenheit -> Kelvin\n6. Kelvin -> Fahrenheit\n\nChoose a conversion: ");

    int conversion;
    scanf("%d", &conversion);

    return conversion;
}

double celsius_to_fahrenheit(double C) {
    return C * 1.8 + 32;
}

double fahrenheit_to_celsius(double F) {
    return (F - 32) / 1.8;
}

double celsius_to_kelvin(double C) {
    return C + 273.15;
}

double kelvin_to_celsius(double K) {
    return K - 273.15;
}

double fahrenheit_to_kelvin(double F) {
    return (F - 32) / 1.8 + 273.15;
}

double kelvin_to_fahrenheit(double K) {
    return (K - 273.15) * 1.8 + 32;
}