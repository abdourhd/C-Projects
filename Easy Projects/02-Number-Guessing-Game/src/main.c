#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int N, G, C, S, R;

int main() {

    srand(time(NULL));

    printf("=== Number Guessing Game ===\n");

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

    printf("I have chosen a number between 1 and %d.\nCan you guess it?\n", R);

    N = rand() % R + 1;
    S = R * MAX;
    C = 0;
    do {
        printf("\nenter a number: ");
        scanf("%d", &G);
        C++;
        if(G > N) {
            printf("Try again\nHint: Less!\n");
            S -= R;
        } else if(G < N) {
            printf("Try again\nHint: More!\n");
            S -= R;
        } else {
            printf("\nCongratulations! You guessed the number!!\nThe number was %d.\nNumber of attempts: %d\n\nYour score: %d points\n", N, C, S);
            break;
        }
        
        if(C == MAX) {
            printf("\nYou Lost!\nYour score: 0 points\n\nTry Again!\n");
        }
    } while(C < MAX);

    return 0;
}