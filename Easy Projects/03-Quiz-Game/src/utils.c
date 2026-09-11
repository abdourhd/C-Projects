#include <stdlib.h>
#include "utils.h"

void shuffle(Question questions[], int size) {
    for(int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Question temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }
}