#include <stdio.h>

int score = 0;
char answer;

int main() {
    printf("=== Quiz Game ===\n\n");

    //Question 1
    printf("1. What is the capital of France?\n\nA. Berlin\nB. Madrid\nC. Paris\nD. London\n\nYour answer: ");

    scanf(" %c", &answer);

    if(answer == 'C' || answer == 'c') {
        printf("\nCorrect!\n\n");
        score++;
    } else {
        printf("\nWrong!\n\n");
    }

    //Question 2
    printf("2. Which planet is known as the Red Planet?\n\nA. Earth\nB. Mars\nC. Jupiter\nD. Venus\n\nYour answer: ");

    scanf(" %c", &answer);

    if(answer == 'B' || answer == 'b') {
        printf("\nCorrect!\n\n");
        score++;
    } else {
        printf("\nWrong!\n\n");
    }

    //Question 3
    printf("3. Who wrote Romeo and Juliet?\n\nA. Charles Dickens\nB. Jane Austen\nC. Mark Twain\nD. William Shakespeare\n\nYour answer: ");

    scanf(" %c", &answer);

    if(answer == 'D' || answer == 'd') {
        printf("\nCorrect!\n\n");
        score++;
    } else {
        printf("\nWrong!\n\n");
    }

    //Question 4
    printf("4. What is the largest ocean on Earth?\n\nA. Atlantic Ocean\nB. Indian Ocean\nC. Arctic Ocean\nD. Pacific Ocean\n\nYour answer: ");

    scanf(" %c", &answer);

    if(answer == 'D' || answer == 'd') {
        printf("\nCorrect!\n\n");
        score++;
    } else {
        printf("\nWrong!\n\n");
    }

    //Question 5
    printf("5. What is the chemical symbol for gold?\n\nA. Au\nB. Ag\nC. Fe\nD. Pb\n\nYour answer: ");

    scanf(" %c", &answer);

    if(answer == 'A' || answer == 'a') {
        printf("\nCorrect!\n\n");
        score++;
    } else {
        printf("\nWrong!\n\n");
    }

    printf("=== Quiz Finished ===\nYour score: %d/5", score);
  

    return 0;
}