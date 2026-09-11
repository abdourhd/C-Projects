#ifndef SCORE_H
#define SCORE_H

void display_score(int score, int total);
int load_highscore(const char *filename, int difficulty);
void save_highscore(const char *filename, int score, int difficulty);

#endif