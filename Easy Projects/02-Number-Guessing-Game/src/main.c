#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int N, G, C, S;

int main() {

    srand(time(NULL));
    N = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\nCan you guess it?\n");

    C = 0;
    S = 100 * MAX;
    do {
        printf("\nenter a number: ");
        scanf("%d", &G);
        C++;
        if(G > N) {
            printf("Try again\nHint: Less!\n");
            S -= 100;
        } else if(G < N) {
            printf("Try again\nHint: More!\n");
            S -= 100;
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