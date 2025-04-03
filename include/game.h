#pragma once
#include "random.h"

namespace Game
{
	// Starts the game: shows greeting and handles replay logic
	void startGame();

	// Handles the loop for asking the user if they want to play again
	void shouldPlay();

	// Runs the core gameplay loop: generates secret number, processes guesses
	void runGameLoop();

}