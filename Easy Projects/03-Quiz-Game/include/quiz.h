#ifndef QUIZ_H
#define QUIZ_H

#include "question.h"

int choice();
int num_question(int difficulty, int total);
int run_quiz(Question questions[], int num);
int replay();

#endif