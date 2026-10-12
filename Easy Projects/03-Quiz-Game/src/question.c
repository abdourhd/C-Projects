#include <stdio.h>

#include "question.h"
#include "color.h"

void display_question(Question q) {
    printf(YEL"- %s" RST"\n", q.question);
    for (int j = 0; j < 4; j++) {
        printf(CYN"    %d. %s"RST, j+1, q.options[j]);
    }
}

int check_answer(Question q, int answer) {
    return answer == q.correct;
}