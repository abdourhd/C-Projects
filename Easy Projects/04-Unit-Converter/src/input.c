#include <stdio.h>
#include <stdlib.h>

#include "input.h"
#include "color.h"

int get_int(const char *prompt, int min, int max) {
    char input[100];
    int value;

    printf(BLU"%s"RST, prompt);
    fgets(input, sizeof(input), stdin);
    value = strtod(input, NULL);

    while(value < min || value > max) {
        printf(RED"\nInvalid choice!\n"RST YEL"Value must be between %d and %d.\n"RST, min, max);
        printf(BLU"%s"RST, prompt);

        fgets(input, sizeof(input), stdin);
        value = strtod(input, NULL);
    }

    return value;
}

double get_double(const char *prompt) {
    char input[100];
    double value;

    printf(BRT_BLU"%s"RST, prompt);
    fgets(input, sizeof(input), stdin);
    value = strtod(input, NULL);

    while (value < 0) {
        printf(RED"\nInvalid choice!\n"RST YEL"Value cannot be negative.\n"RST);
        printf(BRT_BLU"%s"RST, prompt);

        fgets(input, sizeof(input), stdin);
        value = strtod(input, NULL);
    }

    return value;
}