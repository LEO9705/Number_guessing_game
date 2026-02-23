# Number Guessing Game (C++)

## What it does
A simple console game: the program picks a random number between 1 and 100, and the user keeps guessing until they get it right. It tells the user whether the guess is too high or too low, then shows how many tries it took.

## What I learned
For my third attempt, I built a number guessing game in C++. I used `srand(time(NULL))` to seed random numbers and generate a target number between 1 and 100. I also used a `do-while` loop so the program always takes the user’s first input before checking the condition, then repeats until the correct number is guessed. Through this project, I learned how random seeding works and when a `do-while` loop is more appropriate than a `while` loop.

## Requirements
A C++ compiler (`g++` or `clang++`)

## How to run (macOS / Linux)
```bash
g++ main.cpp -o app
./app
```
## How to run (Windows, MInGW)
```bash
g++ main.cpp -o app.exe
```
## Command Prompt:
```bash
app.exe
```
##PowerShell:
```bash
,\app.exe
```
