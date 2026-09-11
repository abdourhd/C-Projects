#include <stdio.h>
#include "quiz.h"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

int run_quiz(Question questions[], int num) {
    int score = 0;

    for(int i = 0; i < num; i++) {
        printf("\n" YELLOW "%d" RESET, i+1);
        display_question(questions[i]);

        int answer;

        printf("Your answer: ");
        scanf("%d", &answer);

        if(check_answer(questions[i], answer)) {
            printf(GREEN "\nCorrect!\n" RESET);
            score++;
        } else {
            printf(RED "\nWrong!\n" RESET);
        }

    }
}