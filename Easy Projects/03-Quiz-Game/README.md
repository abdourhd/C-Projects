# C Quiz Game

A simple command-line quiz game written in **C**.

The player answers multiple-choice questions and receives a final score based on the number of correct answers.

---

## Features

- Multiple-choice questions
- Four answer choices per question
- Automatic answer validation
- Score tracking
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
├── src/
│   └── main.c
│
├── .gitignore
└── README.md
```

---

## How it Works

1. Start the program.
2. Read the question.
3. Choose one of the four available answers.
4. Enter the number corresponding to your answer.
5. The program tells you whether your answer is correct.
6. Your score is displayed at the end of the quiz.

---

## How to Compile

Using GCC:

```bash
gcc main.c -o quiz
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
=== C Quiz Game ===

1. What is 2 + 2?

A. 3
B. 4
C. 5
D. 6

Your answer: 2

Correct!

=== Quiz Finished ===
Your score: 1/1
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
- Basic program flow
- Score calculation

---

## Future Improvements

Possible features to add:

- [ ] Add more questions
- [ ] Randomize questions
- [ ] Add difficulty levels
- [ ] Add a high-score system
- [ ] Save scores to a file
- [ ] Load questions from a file
- [ ] Add colored terminal output
- [ ] Add a replay option
- [ ] Split the project into multiple `.c` and `.h` files

---

## Author

**Abdou**

- GitHub: [abdourhd](https://github.com/abdourhd)

---

## License

This project is open-source and available for educational purposes.
