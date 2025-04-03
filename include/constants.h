#pragma once
#include <string_view>

namespace Constants
{
	constexpr std::string_view greetingsMessage{ "Hello! Lets play the game! You have to guess the number I pick from " };
	constexpr std::string_view doYouWantToPlayMessage{ "Do you want to play? Write \"y\" or \"n\" : " };
	constexpr std::string_view gameWasStartedMessage{ "I have picked a number. Number of attempts: " };
	constexpr std::string_view tryToGuessMessage{ "Write your guess: " };
	constexpr std::string_view numberHigherMessage{ "The number is higher than the secret number. " };
	constexpr std::string_view numberLowerMessage{ "The number is lower than the secret number. " };
	constexpr std::string_view remainAttemptsMessage{ "Remaining attempts: " };
	constexpr std::string_view youWonMessage{ "WOW! You won! The secret number was: " };
	constexpr std::string_view youLostMessage{ "Unfortunately you lost the secret number was: " };
	constexpr std::string_view exitMessage{ "Leaving already? That's a pity! I hope you enjoyed it!" };

	constexpr int min{ 1 };
	constexpr int max{ 100 };
	constexpr int max_attemps{ 7 };
}