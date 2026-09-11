#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "question.h"
#include "file.h"
#include "score.h"
#include "utils.h"
#include "quiz.h"

#define BOLD "\033[1m"
#define RESET "\033[0m"

int main() {
    
    int Exit = 1;

    do {
        srand(time(NULL));

        Question questions[MAX];

        int num = load_questions("./data/questions.txt", questions);

        if(num == 0) {
            printf("failed to load questions");
            return 1;
        }

        printf("\n" BOLD "=====Quiz Game=====" RESET "\n\n");

        int difficulty = choice();

        shuffle(questions, num);

        num = num_question(difficulty, num);

        int score = run_quiz(questions, num);

        display_score(score, num);

        int highscore = load_highscore("./data/highscore.txt", difficulty);

        if(score > highscore) {
            printf("New high score!\n");
            save_highscore("./data/highscore.txt", score, difficulty);
        } else {
            printf("Highscore: %d/%d\n", highscore, num);
        }

        Exit = replay();

    } while (Exit = 1);

    return 0;
}