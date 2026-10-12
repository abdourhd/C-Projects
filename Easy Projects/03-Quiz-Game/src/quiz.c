#include <stdio.h>

#include "quiz.h"
#include "color.h"

int choice() {
    int difficulty;
    printf("Quiz difficulty:\n\n    "GRN"1. Easy"RST"\n    "YEL"2. Medium"RST"\n    "RED"3. Hard"RST"\n\nYour choice: ");
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

    printf(BLD BLU"\n===Quiz Start===\n"RST);

    for(int i = 0; i < num; i++) {
        printf(YEL"\n%d"RST, i+1);
        display_question(questions[i]);

        int answer;

        printf("\nYour answer: ");
        scanf("%d", &answer);

        if(check_answer(questions[i], answer)) {
            printf(GRN"\nCorrect!\n"RST);
            score++;
        } else {
            printf(RED"\nWrong!\n"RST);
        }
    }

    return score;
}

int replay() {
    int Exit;
    printf(BLD BLU"\n==================="RST"\n\nChoose:\n\n"YEL"    0. Exit\n"RST GRN"    1. Replay\n"RST"\nYour choice: ");
    scanf("%d", &Exit);
    return Exit;
}