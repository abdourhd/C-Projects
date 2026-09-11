#ifndef QUESTION_H
#define QUESTION_H

#define MAX 20

typedef struct {
    char question[200];
    char options[4][200];
    int correct;
} Question;

void display_question(Question q);
int check_answer(Question q, int answer);

#endif