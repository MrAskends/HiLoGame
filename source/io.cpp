#include<io.h>
#include<constants.h>
#include <iostream>
#include <cstdlib> // for exit
#include <limits> // for numeric_limits

namespace IO
{
	void ignoreLine()
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	bool clearFailedExtraction()
	{
		// Check for failed extraction
		if (!std::cin) // If the previous extraction failed
		{
			if (std::cin.eof()) // If the stream was closed
			{
				std::exit(0); // Shut down the program now
			}

			// Let's handle the failure
			std::cin.clear(); // Put us back in 'normal' operation mode
			ignoreLine();     // And remove the bad input

			return true;
		}

		return false;
	}

	// Reads an integer input from the user
	int getNumber()
	{
		while (true) // Loop until user enters a valid input
		{
			int userNumber{ 0 };
			std::cin >> userNumber;
			if (clearFailedExtraction())
			{
				std::cout << Constants::errorWrongSymbolMessage << '\n';
				continue;
			}
			if (userNumber < Constants::min || userNumber > Constants::max)
			{
				std::cout << Constants::errorOutOfRangeMessage << '\n';
				continue;
			}
			ignoreLine(); // Remove any extraneous input
			return userNumber;
		}
	}

	// Reads a single character input from the user
	char getChar()
	{
		while (true)
		{
			char userChar{};
			std::cin >> userChar;
			if (!clearFailedExtraction()) // we'll handle error messaging if extraction failed below
				ignoreLine(); // remove any extraneous input (only if extraction succeded)
			switch (userChar)
			{
			case 'y':
			case 'n':
				return userChar;
			default:
				std::cout << Constants::errorWrongSymbolMessage << '\n';
			}
		}
	}

	// Prints the greeting message and range of numbers
	void printGreetingsMessage()
	{
		std::cout << Constants::greetingsMessage << Constants::min << " to " << Constants::max << '\n';
	}

	// Asks the user if they want to play the game
	void printDoYouWantToPlayMessage()
	{
		std::cout << Constants::doYouWantToPlayMessage;
	}

	// Announces the game has started and displays the total number of attempts
	void printGameWasStartedMessage()
	{
		std::cout << Constants::gameWasStartedMessage << Constants::max_attempts << '\n';
	}

	// Prompts the player to enter their guess
	void printTryToGuessMessage()
	{
		std::cout << Constants::tryToGuessMessage;
	}

	// Shows whether the guessed number is too low or too high,
	// and how many attempts the player has left
	void printHintMessage(bool isLower, int leftAttempts)
	{
		if (isLower)
			std::cout << Constants::numberLowerMessage << Constants::remainAttemptsMessage << leftAttempts << '\n';
		else
			std::cout << Constants::numberHigherMessage << Constants::remainAttemptsMessage << leftAttempts << '\n';
	}

	// Displays a win or loss message and shows the secret number
	void printYouLostOrWonMessage(const int secretNumber, bool isLost)
	{
		if (isLost)
			std::cout << Constants::youLostMessage << secretNumber << '\n';
		else
			std::cout << Constants::youWonMessage << secretNumber << '\n';
	}

	// Shows the exit message when the player decides to quit
	void printExitMessage()
	{
		std::cout << Constants::exitMessage << '\n';
	}

	// Debug function that uses only if debug_mode on, in game.cpp
	[[maybe_unused]] void printDebugSecretNumberMessage(const int secretNumber)
	{
		std::cout << Constants::debugShowSecretNumberMessage << secretNumber << '\n';
	}
}