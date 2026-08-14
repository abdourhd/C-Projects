#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int N, G, C, S = 0, CS, R, Hs, Round = 1, Exit = 1;

int main() {

    srand(time(NULL));

    FILE *file = fopen("../data/highscore.txt", "r");
    if(file != NULL) {
        fscanf(file, "%d", &Hs);
        fclose(file);
    } else {
        Hs = 0;
    }

    printf("=== Number Guessing Game ===\n");

    do {
        printf("\nround: %d\n", Round);
        int difficulty;
        printf("Choose a difficulty:\n1. Easy   [1-50]\n2. Medium   [1-100]\n3. Hard   [1-500]\n4. Extreme   [1-1000]\n\nEnter your choice: ");
        scanf("%d", &difficulty);   
        switch (difficulty) {
            case 1:
                R = 50;
                break;
            case 2:
                R = 100;
                break;
            case 3:
                R = 500;
                break;
            case 4:
                R = 1000;
                break;
            default:
                break;
        }

        printf("\nI have chosen a number between 1 and %d.\nCan you guess it?\n", R);

        N = rand() % R + 1;
        CS = R * MAX;
        C = 0;
        do {
            printf("\nenter a number: ");
            scanf("%d", &G);
            C++;
            if(G > N) {
                printf("Try again\nHint: Less!\n");
                CS -= R;
            } else if(G < N) {
                printf("Try again\nHint: More!\n");
                CS -= R;
            } else {
                S += CS;
                printf("\nCongratulations! You guessed the number!!\nThe number was %d.\nNumber of attempts: %d\n\nYour score: %d points\nTotal score: %d points\n", N, C, CS, S);
                if(S > Hs) {
                    Hs = S;
                    printf("\nNew high score!: %d points\n", Hs);
                    FILE *file = fopen("../data/highscore.txt", "w");
                    if(file != NULL) {
                        fprintf(file, "%d", Hs);
                        fclose(file);
                    }
                } else {
                    printf("High score: %d points\n", Hs);
                }
                break;
            }
        
            if(C == MAX) {
                printf("\nYou Lost!\nYour score: 0 points\n\nTry Again!\n");
            }
        } while(C < MAX);

        printf("\n1: Retry\n0: Exit\n\n");
        scanf("%d", &Exit);
        Round++;
    } while(Exit == 1);
    
    printf("Total score: %d points", S);
    ptintf("High score: %d points", Hs);

    return 0;
}