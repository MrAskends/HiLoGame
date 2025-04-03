#pragma once
#include <string_view>

namespace IO
{
	int getNumber();

	char getChar();

	void printGreetingsMessage();

	void printDoYouWantToPlayMessage();

	void printGameWasStartedMessage();

	void printTryToGuessMessage();

	void printHintMessage(bool isLower, int leftAttempts);

	void printYouLostOrWonMessage(const int secretNumber, bool isLost);

	void printExitMessage();
}