#include <stdio.h>
#include "score.h"

#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

void display_score(int score, int total) {
    printf("\n" BOLD BLUE "===Quiz End===" RESET "\nYour score: " GREEN "%d" RESET "/" GREEN "%d" RESET "\n", score, total);
}

int load_highscore(const char *filename, int difficulty) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    int score1, score2, score3;

    fscanf(file, "%d", &score1);
    fscanf(file, "%d", &score2);
    fscanf(file, "%d", &score3);
    fclose(file);

    switch (difficulty)
    {
    case 1:
        return score1;
        break;

    case 2:
        return score2;
        break;

    case 3:
        return score3;
        break;
    }
}

void save_highscore(const char *filename, int score, int difficulty) {
    FILE *file = fopen(filename, "r");
    FILE *temp = fopen("./data/temp.txt", "w");

    if(temp == NULL || file == NULL) {
        perror("Error Opening file");
        return;
    }

    int score1, score2, score3;

    fscanf(file, "%d", &score1);
    fscanf(file, "%d", &score2);
    fscanf(file, "%d", &score3);

    switch (difficulty) 
    {
    case 1:
        score1 = score;
        break;
    
    case 2:
        score2 = score;
        break;

    case 3:
        score3 = score;
        break;
    }

    fprintf(temp, "%d\n", score1);
    fprintf(temp, "%d\n", score2);
    fprintf(temp, "%d", score3);

    fclose(temp);
    fclose(file);

    remove(filename);

    if(rename("./data/temp.txt", filename) != 0) {
        perror("Error renaming file");
        return;
    }
}