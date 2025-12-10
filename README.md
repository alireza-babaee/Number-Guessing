# Number Guessing Game (C++)

A simple, fun, and **bulletproof** console-based number guessing game written in modern C++.

The computer picks a random number between **1 and 100**, and you have to guess it!  
The game gives you "Too high" or "Too low" hints — and best of all:  
**You cannot break it** — invalid inputs (letters, negative numbers, numbers >100, etc.) are rejected instantly.

Perfect for beginners learning C++ input validation and loops!

## Features

- Truly random number using `<random>` (Mersenne Twister)
- Full input validation — impossible to enter wrong data
- Rejects letters, symbols, negative numbers, 0, and numbers >100
- Clean and user-friendly messages
- Counts your attempts
- Modern C++17+ compatible

## How to Compile & Run

### Windows / Linux / macOS

Make sure you have a C++ compiler installed (g++, clang++, etc.)

```bash
g++ -std=c++17 -O2 -Wall -Wextra number_guessing_game.cpp -o guessgame
Then run:
./guessgame          # Linux/macOS
# or
guessgame.exe        # Windows
One-liner (Linux/macOS)
g++ -std=c++17 number_guessing_game.cpp -o guessgame && ./guessgame
Requirements

C++17 or later
Standard library only (no external dependencies)

Future Ideas (Contributions Welcome!)

Add "Play Again?" option
Difficulty levels (Easy: 1–50, Hard: 1–1000)
Guess limit challenge
Colorful output using ANSI codes
```
Author:
alireza-babaee

License
This project is open source and available under the MIT License.
