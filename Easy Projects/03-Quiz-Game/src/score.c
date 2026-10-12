#include <stdio.h>

#include "score.h"
#include "color.h"

void display_score(int score, int total) {
    printf(BLD BLU"\n===Quiz End==="RST"\nYour score: "GRN"%d"RST"/"GRN"%d\n"RST, score, total);
}

int load_highscore(const char *filename, int difficulty) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror(RED"Error Opening file"RST);
        return;
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
        perror(RED"Error Opening file"RST);
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
        perror(RED"Error renaming file"RST);
        return;
    }
}