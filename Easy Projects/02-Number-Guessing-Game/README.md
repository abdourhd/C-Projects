# Number Guessing Game

A simple number guessing game written in **C**.

The program randomly selects a number between 1 and 100, and the player has to guess the number. After every guess, the program tells the player whether their guess is too high or too low.

## Features

- Random number generation
- User input
- High/low hints
- Attempt counter
- Simple command-line interface

## Technologies

- C
- Standard C Library
- GCC or another C compiler

## Project Structure

```text
Number-Guessing-Game/
│
├── src/
│   └── main.c
│
├── .gitignore
└── README.md
```

## How It Works

1. The program generates a random number between 1 and 100.
2. The player enters a guess.
3. The program compares the guess with the secret number.
4. If the guess is too low, the program displays `Too low!`.
5. If the guess is too high, the program displays `Too high!`.
6. The game continues until the correct number is guessed.
7. The number of attempts is displayed at the end.

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
```

## Concepts Practiced

This project helps practice:

- Variables
- `if / else if / else`
- `do while` loops
- User input with `scanf()`
- Random numbers with `rand()`
- Random seeds with `srand()`
- The `time()` function
- Functions from the C standard library
- Basic Git and GitHub project organization

## Possible Improvements

I can make the projects more advanced by adding:

- [ ] Limited number of attempts
- [ ] Score system
- [ ] Different number ranges
- [ ] High score system
- [ ] Multiple rounds
- [ ] Difficulty levels
- [ ] Difficulty-based scoring

## License

This project is open source and available for educational purposes.
