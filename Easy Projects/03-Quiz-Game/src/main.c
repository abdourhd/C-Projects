#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "question.h"
#include "file.h"
#include "score.h"
#include "utils.h"
#include "quiz.h"
#include "color.h"

int main() {
    
    int Exit = 1;

    do {
        srand(time(NULL));

        Question questions[MAX];

        int num = load_questions("./data/questions.txt", questions);

        if(num == 0) {
            printf(RED"failed to load questions"RST);
            return 1;
        }

        printf(BLD"\n=====Quiz Game=====\n\n"RST);

        int difficulty = choice();

        shuffle(questions, num);

        num = num_question(difficulty, num);

        int score = run_quiz(questions, num);

        display_score(score, num);

        int highscore = load_highscore("./data/highscore.txt", difficulty);

        if(score > highscore) {
            printf(MAG BLD"New high score!\n"RST);
            save_highscore("./data/highscore.txt", score, difficulty);
        } else {
            printf(GRN"Highscore: %d/%d\n"RST, highscore, num);
        }

        Exit = replay();

    } while (Exit = 1);

    return 0;
}