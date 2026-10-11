#include <stdio.h>

#include "history.h"

void save_conversion(const char *filename, double val1, const char *unit1, double val2, const char *unit2) {
    FILE *file = fopen(filename, "a");
    if(file == NULL) {
        perror("Error Opening file");
        return;
    }

    if(file != NULL) {
        fprintf(file, "%lf %s = %lf %s\n", val1, unit1, val2, unit2);
        fclose(file);
    }
    
}

void display_history(const char *filename) {
    char history[50];
    FILE *file = fopen(filename, "r");

    if(file == NULL) {
        perror("Error Opening file");
        return;
    }

    printf("\n========= HISTORY =========\n\n");
    while (fgets(history, sizeof(history), file) != NULL) {
        printf("%s", history);
    }
    printf("\n===========================\n");
    fclose(file);
}