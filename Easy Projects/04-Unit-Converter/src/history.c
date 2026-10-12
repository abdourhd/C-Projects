#include <stdio.h>

#include "history.h"
#include "color.h"

void save_conversion(const char *filename, double val1, const char *unit1, double val2, const char *unit2) {
    FILE *file = fopen(filename, "a");
    if(file == NULL) {
        perror(RED"Error Opening file"RST);
        return;
    }

    fprintf(file, "%lf %s = %lf %s\n", val1, unit1, val2, unit2);
    if (fclose(file) == EOF) {
        perror("Error closing history file");
    }
}

void display_history(const char *filename) {
    char history[50];
    FILE *file = fopen(filename, "r");

    if(file == NULL) {
        perror(RED"Error Opening file"RST);
        return;
    }

    printf(MAG BLD"\n========= HISTORY =========\n\n"RST);
    while (fgets(history, sizeof(history), file) != NULL) {
        printf(BRT_MAG"%s"RST, history);
    }
    if (fclose(file) == EOF) {
        perror("Error closing history file");
    }
    printf(MAG BLD"\n===========================\n"RST);
}