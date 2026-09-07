#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

typedef struct {
    char question[200];
    char options[4][100];
    int correct;
} Question;

int answer, score = 0, score1, score2, score3, highscore, difficulty, Exit = 1;

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

    do {
        //Number of Questions
        int num = MAX;

        //Start of the Quiz
        printf(BLUE BOLD "=== Quiz Game ===" RESET "\n\n");
   
        //Randomize the Questions
        srand(time(NULL));

        int indexes[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

        for (int i = num - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            int temp = indexes[i];
            indexes[i] = indexes[j];
            indexes[j] = temp;
        }

        printf(BOLD "=Choose Difficulty=" RESET "\n\n" GREEN "    1. Easy" RESET "\n" YELLOW "    2. Normal" RESET "\n" RED "    3. Hard" RESET"\n\nChoose: ");
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

            printf("\n" YELLOW "%d- %s" RESET "\n", i+1, questions[index].question);
            for (int j = 0; j < 4; j++) {
                printf(CYAN "    %d. %s" RESET, j+1, questions[index].options[j]);
            }
            printf("\nYour answer: ");
            scanf("%d", &answer);

            if(answer == questions[index].correct) {
                printf("\n" GREEN "Correct !" RESET "\n");
                score++;
            } else {
                printf("\n" RED "Wrong !" RESET "\n");
            }

            i++;
        } while(i < num);

        //End of Quiz
        printf("\n" BLUE BOLD "=== Quiz Finished ===" RESET "\n\n");

        if(score > highscore) {
            printf(GREEN "New Highscore!: %d/%d" RESET "\n", score, num);
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
        printf("Your score: " GREEN "%d" RESET "/%d\nHighscore: " YELLOW "%d" RESET "/%d\n", score, num, highscore, num);
        printf("\n1: Retry\n0: Exit\n\nChoose: ");
        scanf("%d", &Exit);
    } while (Exit = 1);

    return 0;
}