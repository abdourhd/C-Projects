# Number Guessing Game

A simple number guessing game written in **C**.

The player choose a difficulty between easy, medium, hard and extreme. The program randomly selects a number between 1 and a number defined by the choosen difficulty, and the player has to guess the number. After every guess, the program tells the player whether their guess is too high or too low, if the player got too many wrong guess, he will lose, other wise he will win and get a score based on the number of attempts to guess the number.

## Features

- Random number generation
- User input
- High/low hints
- Difficulty system
- Attempt counter
- Score counter
- High score diplay
- Simple command-line interface

## Technologies

- C
- Standard C Library
- GCC or another C compiler

## Project Structure

```text
02-Number-Guessing-Game/
│
├── src/
│   └── main.c
│
├── data/
│   └── highscore.c
│
├── .gitignore
└── README.md
```

## How It Works

1. The user enter a difficulty. (ex: Easy)
2. The program generates a random number between 1 and a maximum number according to the difficulty.
3. The player enters a guess.
4. The program compares the guess with the secret number.
5. If the guess is too low, the program displays `Hint: More!`.
6. If the guess is too high, the program displays `Hint: Less!`.
7. The game continues until the correct number is guessed.
8. The number of attempts is displayed at the end.
9. The score is displayed at the end.
10. The high score is displayed at the end
11. If the number of attempts reach it's limit the game end with a loss.

## Compilation

Using GCC:

```bash
gcc src/main.c -o guessing_game
```

## Running the Program

### Windows

```bash
guessing_game.exe
```

### Linux / macOS

```bash
./guessing_game
```

## Example

```text
=== Number Guessing Game ===
I have chosen a number between 1 and 100.
Can you guess it?

Enter your guess: 50
Hint: Less!

Enter your guess: 25
Hint: More!

Enter your guess: 37
Hint: Less!

Enter your guess: 32
Hint: More!

Enter your guess: 35

Congratulations! You guessed the number!
The number was 35.
Number of attempts: 5
Score: 500
HighScore: 900
```

## Concepts Practiced

This project helps practice:

- Variables
- `if / else if / else`
- `switch / case`
- `do while` loops
- User input with `scanf()`
- Random numbers with `rand()`
- Random seeds with `srand()`
- The `time()` function
- File manipulation
- Functions from the C standard library
- Basic Git and GitHub project organization

## Possible Improvements

I can make the projects more advanced by adding:

- [x] Limited number of attempts
- [x] Score system
- [x] Different number ranges
- [x] Difficulty levels
- [x] Difficulty-based scoring
- [x] High score system
- [ ] Multiple rounds

## License

This project is open source and available for educational purposes.
