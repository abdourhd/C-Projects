#include <stdio.H>
#include "file.h"

int load_questions(const char *filename, Question questions[]) {
    FILE *file = fopen(filename, "r");

    if(file == NULL) {
        return 0;
    }

    int count = 0;

    while (count < MAX) {
        if(fgets(questions[count].question, 200, file) == NULL) {
            break;
        }

        fgets(questions[count].options[0], 200, file);
        fgets(questions[count].options[1], 200, file);
        fgets(questions[count].options[2], 200, file);
        fgets(questions[count].options[3], 200, file);

        fscanf(file, "%d", &questions[count].correct);

        fgetc(file);

        count++;
    }
    fclose(file);

    return count;
}