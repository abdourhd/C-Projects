#include <stdio.h>
#include "question.h"

#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

void display_question(Question q) {
    printf(YELLOW "- %s" RESET "\n", q.question);
    for (int j = 0; j < 4; j++) {
        printf(CYAN "    %d. %s" RESET "\n", j+1, q.options[j]);
    }
}

int check_answer(Question q, int answer) {
    return answer == q.correct;
}