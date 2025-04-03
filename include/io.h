#pragma once

namespace IO
{
	void ignoreLine();

	// Gets an integer number from the user
	int getNumber();

	// Gets a single character from the user
	char getChar();

	// Prints the greeting message with game rules
	void printGreetingsMessage();

	// Prints the message asking if the player wants to play
	void printDoYouWantToPlayMessage();

	// Informs the player that the game has started and how many attempts are allowed
	void printGameWasStartedMessage();

	// Prompts the player to enter their guess
	void printTryToGuessMessage();

	// Prints a hint whether the guessed number is lower or higher than the secret number,
	// and shows how many attempts are left
	void printHintMessage(bool isLower, int leftAttempts);

	// Prints whether the player won or lost, and reveals the secret number
	void printYouLostOrWonMessage(const int secretNumber, bool isLost);

	// Prints the exit message when the player chooses not to play again
	void printExitMessage();
}