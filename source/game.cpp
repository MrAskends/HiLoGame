#include "game.h"
#include "io.h"
#include "constants.h"

namespace Game
{
	// Entry point to the game logic
	void startGame()
	{
		IO::printGreetingsMessage();
		IO::printDoYouWantToPlayMessage();
		shouldPlay();
	}

	// Handles the replay prompt and restarts the game if user types 'y'
	void shouldPlay()
	{
		while (IO::getChar() == 'y')
		{
			system("cls"); // Clears the console screen
			runGameLoop();
			IO::printDoYouWantToPlayMessage();
		}
		IO::printExitMessage();
	}

	// Core gameplay loop: handles guessing, feedback, and win/loss logic
	void runGameLoop()
	{
		int remainingAttempts{ Constants::max_attempts }; // Number of tries left
		const int secretNumber{ Random::get(Constants::min, Constants::max) }; // Random number to guess
		IO::printGameWasStartedMessage();
		while (remainingAttempts > 0)
		{
			IO::printTryToGuessMessage();
			int guess{ IO::getNumber() };
			if (guess == secretNumber)
			{
				IO::printYouLostOrWonMessage(secretNumber, false);//false = player won(since isLost == false)
				break;
			}

			// Show hint and decrease attempts
			if (--remainingAttempts != 0)
			{
				IO::printHintMessage(guess < secretNumber, remainingAttempts);
			}
			else
			{
				IO::printYouLostOrWonMessage(secretNumber, true); //true = player lost(since isLost == true)
				
			}
		}
		
	}
}