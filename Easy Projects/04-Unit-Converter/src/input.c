#include <stdio.h>
#include <stdlib.h>

#include "input.h"

int get_int(const char *prompt, int min, int max) {
    char input[100];
    int value;

    printf("%s", prompt);
    while(value < min || value > max) {
        printf("Value must be between %d and %d.\n", min, max);
        printf("%s", prompt);

        fgets(input, sizeof(input), stdin);
        value = strtod(input, NULL);
    }

    return value;
}

double get_double(const char *prompt) {
    char input[100];
    double value;

    printf("%s", prompt);
    while (value < 0) {
        printf("Value cannot be negative.\n");
        printf("%s", prompt);

        fgets(input, sizeof(input), stdin);
        value = strtod(input, NULL);
    }

    return value;
}