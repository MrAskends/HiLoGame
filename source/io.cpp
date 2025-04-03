#include<io.h>
#include<constants.h>
#include <iostream>

namespace IO
{
	int getNumber()
	{
		int userNumber{ 0 };
		std::cin >> userNumber;
		return userNumber;
	}

	char getChar()
	{
		char userChar{ ' ' };
		std::cin >> userChar;
		return userChar;
	}

	void printGreetingsMessage()
	{
		std::cout << Constants::greetingsMessage << Constants::min << " to " << Constants::max << std::endl;
	}

	void printDoYouWantToPlayMessage()
	{
		std::cout << Constants::doYouWantToPlayMessage;
	}

	void printGameWasStartedMessage()
	{
		std::cout << Constants::gameWasStartedMessage << Constants::max_attemps << std::endl;
	}

	void printTryToGuessMessage()
	{
		std::cout << Constants::tryToGuessMessage;
	}

	void printHintMessage(bool isLower, int leftAttempts)
	{
		if (isLower)
			std::cout << Constants::numberLowerMessage << Constants::remainAttemptsMessage << leftAttempts << std::endl;
		else
			std::cout << Constants::numberHigherMessage << Constants::remainAttemptsMessage << leftAttempts << std::endl;
	}

	void printYouLostOrWonMessage(const int secretNumber, bool isLost)
	{
		if (isLost)
			std::cout << Constants::youLostMessage << secretNumber << std::endl;
		else
			std::cout << Constants::youWonMessage << secretNumber << std::endl;
	}

	void printExitMessage()
	{
		std::cout << Constants::exitMessage << std::endl;
	}
}