#pragma once
#include <string_view>

namespace Constants
{
	// Welcome message shown at the beginning of the game
	constexpr std::string_view greetingsMessage{ "Hello! Let's play the game! You have to guess the number I pick from " };

	// Prompt asking if the user wants to play
	constexpr std::string_view doYouWantToPlayMessage{ "Do you want to play? Write \"y\" or \"n\" : " };

	// Message shown when the game starts
	constexpr std::string_view gameWasStartedMessage{ "I've picked a number. Number of attempts: " };

	// Prompt asking the user to enter their guess
	constexpr std::string_view tryToGuessMessage{ "Write your guess: " };

	// Hint when the guessed number is higher than the secret number
	constexpr std::string_view numberHigherMessage{ "The number is higher than the secret number. " };

	// Hint when the guessed number is lower than the secret number
	constexpr std::string_view numberLowerMessage{ "The number is lower than the secret number. " };
	
	// Message prefix for remaining attempts
	constexpr std::string_view remainAttemptsMessage{ "Remaining attempts: " };

	// Message shown when the player wins
	constexpr std::string_view youWonMessage{ "WOW! You won! The secret number was: " };

	// Message shown when the player loses
	constexpr std::string_view youLostMessage{ "Unfortunately, you lost! The secret number was: " };

	// Message shown when the user chooses to exit the game
	constexpr std::string_view exitMessage{ "Leaving already? Too bad! Hope you had fun!" };

	// Welcome message shown at the beginning of the game
	constexpr std::string_view errorOutOfRangeMessage{ "Out of range! Please enter a number within the valid range." };

	// Welcome message shown at the beginning of the game
	constexpr std::string_view errorWrongSymbolMessage{ "Oops, that input is invalid :( Please try again." };

	constexpr std::string_view debugShowSecretNumberMessage{ "The secret number is: " };

	// Minimum number for the random range
	constexpr int min{ 1 };

	// Maximum number for the random range
	constexpr int max{ 100 };

	// Maximum number of attempts allowed
	constexpr int max_attempts{ 7 };
}