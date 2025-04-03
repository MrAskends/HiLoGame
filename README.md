# HiLoGame

**HiLoGame** is a simple console-based number guessing game written in modern C++. 
This project was created as a learning exercise to practice code structure, modular design,
input validation, debug flag usage, and basic preprocessor logic.

---

## Features

- Secret number randomly chosen within a defined range
- Loop for guessing with a fixed number of attempts
- Hints whether the guess is higher/lower
- Input validation for both characters and numbers
- Debug mode support (show secret number if `DEBUG_MODE` is defined)
- Clean modular design (Game, IO, Constants, Random)

---

## Educational Goals

This project helps practice:

- Header separation and namespaces
- `constexpr` vs `const`
- Preprocessor usage (`#define`, `#ifdef`)
- Defensive coding (input validation, stream cleanup)
- C++17 features like `string_view`

---

## How to Play

1. Game selects a number from 1 to 100
2. You have 7 attempts to guess it
3. After each guess, the game tells you if the secret number is higher or lower
4. Game ends with win/loss message, then offers to play again

---

## File Structure

```bash
HiLoGame/
├── main.cpp              # Entry point
├── game.cpp / .h         # Game logic (main loop, control flow)
├── io.cpp / .h           # Input/output functions
├── constants.h           # Game text & settings (constexpr)
├── random.h              # Header-only random number generator
├── CMakeLists.txt        # CMake build configuration
```

---

## Build Instructions

This project uses **CMake** as a build system. You can build it on any OS that supports CMake + a C++17 compiler.

### Requirements
- CMake 3.10+
- g++, clang++, or MSVC with C++17 support

### Build Steps

```bash
git clone https://github.com/MrAskends/HiLoGame.git
cd HiLoGame
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/HiLoGame
```