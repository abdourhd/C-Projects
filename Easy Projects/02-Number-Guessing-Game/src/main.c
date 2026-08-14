#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int N, G, C;

int main() {

    srand(time(NULL));
    N = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\nCan you guess it?\n");

    C = 0;
    do {
        printf("\nenter a number: ");
        scanf("%d", &G);
        C++;
        if(G > N) {
            printf("Try again\nHint: Less!\n");
        } else if(G < N) {
            printf("Try again\nHint: More!\n");
        } else {
            printf("\nCongratulations! You guessed the number!!\nThe number was %d.\nNumber of attempts: %d", N, C);
            break;
        }
        
        if(C == MAX) {
            printf("\nYou Lost!\nTry Again!");
        }
    } while(C < MAX);

    return 0;
}