#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N, G, C;

int main() {

    srand(time(NULL));
    N = rand() % 100 + 1;
    C = 0;

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\nCan you guess it?\n");

    while(1) {
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
    }

    return 0;
}