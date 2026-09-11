#include <stdio.h>
#include "quiz.h"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

int choice() {
    int difficulty;
    printf("Quiz difficulty:\n\n    " GREEN "1. Easy" RESET "\n    " YELLOW "2. Medium" RESET "\n    " RED "3. Hard" RESET "\n\nYour choice: ");
    scanf("%d", &difficulty);

    return difficulty;
}

int num_question(int difficulty, int total) {
    switch (difficulty)
    {
    case 1:
        total = total / 4;
        break;

    case 2:
        total = total / 2;
        break;

    case 3:
        total = total;
        break;
    }

    return total;
}

int run_quiz(Question questions[], int num) {
    int score = 0;

    printf("\n===Quiz Start===\n");

    for(int i = 0; i < num; i++) {
        printf("\n" YELLOW "%d" RESET, i+1);
        display_question(questions[i]);

        int answer;

        printf("\nYour answer: ");
        scanf("%d", &answer);

        if(check_answer(questions[i], answer)) {
            printf(GREEN "\nCorrect!\n" RESET);
            score++;
        } else {
            printf(RED "\nWrong!\n" RESET);
        }
    }

    return score;
}