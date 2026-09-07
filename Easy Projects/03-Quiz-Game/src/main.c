#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20

typedef struct {
    char question[200];
    char options[4][100];
    int correct;
} Question;

int answer, score = 0, score1, score2, score3, highscore, difficulty;

int main() {

    //Questions
    Question questions[MAX];
    FILE *question = fopen("./data/question.txt", "r");
    if (question == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Load Questions
    for(int i = 0; i < MAX; i++) {
        Question *q = &questions[i];
        // Read Question
        if (fgets(q->question, sizeof(q->question), question) == NULL)
            break;

        // Read 4 options
        for (int j = 0; j < 4; j++) {
            fgets(q->options[j], sizeof(q->options[j]), question);
        }

        // Read correct answer
        fscanf(question, "%d", &q->correct);

        // Remove newline left by fscanf/fgets interaction
        fgetc(question);
    }
    fclose(question);

    //Number of Questions
    int num = MAX;

    //Randomize the Questions
    srand(time(NULL));

    int indexes[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

    for (int i = num - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = indexes[i];
        indexes[i] = indexes[j];
        indexes[j] = temp;
    }

    
    //Start of the Quiz
    printf("=== Quiz Game ===\n\n");

    printf("=Choose Difficulty=\n\n    1. Easy\n    2. Normal\n    3. Hard\n\nChoose: ");
    scanf("%d", &difficulty);

    switch (difficulty) {
        case 1:
            num = num / 4;
            break;
    
        case 2:
            num = num / 2;
            break;

        case 3:
            break;

        default:
            printf("error");
            return 1;
            break;
    }

    FILE *file = fopen("./data/highscore.txt", "r");
    if(file != NULL) {
        for (int i = 0; i < difficulty; i++) {
            fscanf(file, "%d", &highscore);
        }
    } else {
        highscore = 0;
    }
    fclose(file);

    int i = 0;
    do {
        int index = indexes[i];

        printf("\n%d- %s\n", i+1, questions[index].question);
        for (int j = 0; j < 4; j++) {
            printf("    %d. %s", j+1, questions[index].options[j]);
        }
        printf("\nYour answer: ");
        scanf("%d", &answer);

        if(answer == questions[index].correct) {
            printf("\nCorrect !\n");
            score++;
        } else {
            printf("\nWrong !\n");
        }

        i++;
    } while(i < num);

    //End of Quiz
    printf("\n=== Quiz Finished ===\n");

    if(score > highscore) {
        printf("New Highscore!: %d/%d\n", score, num);
        highscore = score;
        FILE *file = fopen("./data/highscore.txt", "r");
        FILE *temp = fopen("./data/temp.txt", "w");

        if(temp == NULL || file == NULL) {
            perror("Error Opening file");
            return 1;
        }

        fscanf(file, "%d", &score1);
        fscanf(file, "%d", &score2);
        fscanf(file, "%d", &score3);
        switch (difficulty) {
            case 1:
                score1 = highscore;
                break;
    
            case 2:
                score2 = highscore;
                break;

            case 3:
                score3 = highscore;
                break;
        }
        fprintf(temp, "%d\n", score1);
        fprintf(temp, "%d\n", score2);
        fprintf(temp, "%d", score3);

        fclose(temp);
        fclose(file);

        remove("./data/highscore.txt");

        if(rename("./data/temp.txt", "./data/highscore.txt") != 0) {
            perror("Error renaming file");
            return 1;
        }        
    }
    printf("Your score: %d/%d\nHighscore: %d/%d", score, num, highscore, num);

    return 0;
}