#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int answer, score = 0;

int main() {

    //Questions
    char *questions[] = { 
        "What is the capital of France?", 
        "Which planet is known as the Red Planet?", 
        "Who wrote Romeo and Juliet?",
        "What is the largest ocean on Earth?",
        "What is the chemical symbol for gold?",
        "How many continents are there on Earth?",
        "Which country is the home of the pyramid of Giza?",
        "What is the fastest land animal?",
        "Which language has the most native speakers?",
        "What is the hardest natural substance on earth?",
        "Which gas do plants absorb from the atmosphere during photosynthesis?",
        "Who painted the Mona Lisa?",
        "Which is the smallest planet in our solar system?",
        "What is the main ingredient in guacamole?",
        "Which element has the chemical symbol 'O'?",
        "Which is the tallest mountain in the world above sea level?",
        "What is the largest mammal in the world?",
        "Which country is known as the Land of the Rising Sun?",
        "Which instrument has 88 keys?",
        "What is the largest organ in the human body?"
    };

    //Number of Questions
    int num = sizeof(questions) / sizeof(questions[0]);

    //Options
    char *options[][4] = {
        {"1. Berlin", "2. Madrid", "3. Paris", "4. London"},
        {"1. Earth", "2. Mars", "3. Jupiter", "4. Venus"},
        {"1. Charles Dickens", "2. Jane Austen", "3. Mark Twain", "4. William Shakespeare"},
        {"1. Atlantic Ocean", "2. Indian Ocean", "3. Arctic Ocean", "4. Pacific Ocean"},
        {"1. Au", "2. Ag", "3. Fe", "4. Pb"},
        {"1. 5", "2. 6", "3. 7", "4. 8"},
        {"1. Mexico", "2. Egypt", "3. Peru", "4. India"},
        {"1. Lion", "2. Horse", "3. Cheetah", "4. Elephant"},
        {"1. Spanish", "2. English", "3. Mandarin", "4. Hindi"},
        {"1. Diamond", "2. Gold", "3. Iron", "4. Platine"},
        {"1. Oxygen", "2. Carbon Dioxide", "3. Nitrogen", "4. Hydrogen"},
        {"1. Vincent van Gogh", "2. Pablo Picasso", "3. Leonardo da Vinci", "4. Claude Monet"},
        {"1. Mars", "2. Venus", "3. Neptune", "4. Mercury"},
        {"1. Tomato", "2. Onion", "3. Avocado", "4. Lime"},
        {"1. Oxygen", "2. Gold", "3. Osmium", "4. Oganesson"},
        {"1. K2", "2. Kilimanjaro", "3. Denali", "4. Mount Everest"},
        {"1. African Elephant", "2. Blue Whale", "3. Giraffe", "4. Hippopotamus"},
        {"1. China", "2. Japan", "3. South Korea", "4. North Korea"},
        {"1. Guitar", "2. Violin", "3. Flute", "4. Piano"},
        {"1. Heart", "2. Liver", "3. Skin", "4. Lungs"}
    };

    //Correct Answers
    int correct[] = {3, 2, 4, 4, 1, 3, 2, 3, 3, 1, 2, 3, 4, 3, 1, 4, 2, 2, 4, 3};

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

    int i = 0;
    do {
        int index = indexes[i];

        printf("\n%d- %s\n\n", i+1, questions[index]);
        for (int j = 0; j < 4; j++) {
            printf("    %s\n", options[index][j]);
        }
        printf("\nYour answer: ");
        scanf("%d", &answer);

        if(answer == correct[index]) {
            printf("\nCorrect !\n");
            score++;
        } else {
            printf("\nWrong !\n");
        }

        i++;
    } while(i < num);

    printf("\n=== Quiz Finished ===\nYour score: %d/%d", score, num);

    return 0;
}