#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int num, guess, count, score = 0, current, base, highscore, round = 1, exit = 0;

int main() {

    srand(time(NULL));

    FILE *file = fopen("./data/highscore.txt", "r");
    if(file != NULL) {
        fscanf(file, "%d", &highscore);
    } else {
        highscore = 0;
    }
    fclose(file);

    printf("=== Number Guessing Game ===\n");

    do {
        printf("\nround: %d\n", round);
        int difficulty;
        printf("Choose a difficulty:\n1. Easy   [1-50]\n2. Medium   [1-100]\n3. Hard   [1-500]\n4. Extreme   [1-1000]\n\nEnter your choice: ");
        scanf("%d", &difficulty);   
        switch (difficulty) {
            case 1:
                base = 50;
                break;
            case 2:
                base = 100;
                break;
            case 3:
                base = 500;
                break;
            case 4:
                base = 1000;
                break;
            default:
                break;
        }

        printf("\nI have chosen a number between 1 and %d.\nCan you guess it?\n", base);

        num = rand() % base + 1;
        current = base * MAX;
        count = 0;
        do {
            printf("\nenter a number: ");
            scanf("%d", &guess);
            count++;
            if(guess > num) {
                printf("Try again\nHint: Less!\n");
                current -= base;
            } else if(guess < num) {
                printf("Try again\nHint: More!\n");
                current -= base;
            } else {
                score += current;
                printf("\nCongratulations! You guessed the number!!\nThe number was %d.\nNumber of attempts: %d\n\nYour score: %d points\nTotal score: %d points\n", num, count, current, score);
                if(score > highscore) {
                    highscore = score;
                    printf("\nNew high score!: %d points\n", highscore);
                    FILE *file = fopen("./data/highscore.txt", "w");
                    if(file != NULL) {
                        fprintf(file, "%d", highscore);
                    }
                    fclose(file);
                } else {
                    printf("High score: %d points\n", highscore);
                }
                break;
            }
        
            if(count == MAX) {
                printf("\nYou Lost!\nYour score: 0 points\n\nTry Again!\n");
            }
        } while(count < MAX);

        printf("\n1: Retry\n0: Exit\n\n");
        scanf("%d", &exit);
        round++;
    } while(exit != 0);

    printf("\nTotal score: %d points\n", score);
    printf("High score: %d points\n", highscore);

    return 0;
}