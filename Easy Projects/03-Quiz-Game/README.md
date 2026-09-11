# C Quiz Game

A simple command-line quiz game written in **C**.

The player choose a difficulty and answers multiple-choice questions, at the end he receives a final score based on the number of correct answers and a highscore based on the difficulty.

The player can replay at the end of the round.

---

## Features

- Multiple-choice questions
- Difficulty levels
- Four answer choices per question
- Load questions from a file
- Automatic answer validation
- Score tracking
- Highscore system
- Final score display
- Simple command-line interface

---

## Technologies

- **C**
- Standard C Library
- GCC or another C

---

## Project Structure

```text
03-Quiz-Game/
│
├── include/
│   ├── question.h
│   ├── quiz.h
│   ├── file.h
│   ├── score.h
│   └── utils.h
│
├── src/
│   ├── main.c
│   ├── question.c
│   ├── quiz.c
│   ├── file.c
│   ├── score.c
│   └── utils.c
│
├── data/
│   ├── highscore.txt
│   └── questions.txt
│
├── .gitignore
└── README.md
```

---

## How it Works

1. Start the program.
2. Choose a difficulty.
3. Read the question.
4. Choose one of the four available answers.
5. Enter the number corresponding to your answer.
6. The program tells you whether your answer is correct.
7. Your score and the highscore are displayed at the end of the quiz.
8. Choose to replay or exit at the end.

---

## How to Compile

Using GCC:

```bash
gcc src/main.c src/quiz.c src/question.c src/file.c src/score.c src/utils.c -Iinclude -o quiz
```

---

## How to Run

### Windows

```bash
quiz.exe
```

### Linux / macOS

```bash
./quiz
```

---

### Example

```text
===== Quiz Game =====

Quiz difficulty:

    1. Easy
    2. Medium
    3. Hard

Your choice: 1

=== Quiz Start ===

1- What is 2 + 2?

    1. 3
    2. 4
    3. 5
    4. 6

Your answer: 2

Correct!

=== Quiz Finished ===
Your score: 1/5
Highscore: 4/5
```

---

## Concepts Practiced

This project is useful for practicing several fundamental C concepts:

- Variables
- Arrays
- Strings
- `if` / `else` statements
- `for` loops
- Functions
- User input with `scanf()`
- Files management
- Basic program flow
- Header files manipulation

---

## Future Improvements

Possible features to add:

- [x] Add more questions
- [x] Randomize questions
- [x] Add difficulty levels
- [x] Add a high-score system
- [x] Load questions from a file
- [x] Add colored terminal output
- [x] Add a replay option
- [x] Split the project into multiple `.c` and `.h` files

---

## Author

**Abdou**

- GitHub: [abdourhd](https://github.com/abdourhd)

---

## License

This project is open-source and available for educational purposes.
