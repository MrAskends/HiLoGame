#include "game.h"
#include "io.h"
#include "constants.h"

namespace Game
{
	void startGame()
	{
		IO::printGreetingsMessage();
		IO::printDoYouWantToPlayMessage();
		shouldPlay();
	}

	void shouldPlay()
	{
		while (IO::getChar() == 'y')
		{
			system("cls");
			runGameLoop();
			IO::printDoYouWantToPlayMessage();
		}
		IO::printExitMessage();
	}

	void runGameLoop()
	{
		int current_attemption{ Constants::max_attemps };
		const int secretNumber{ Random::get(Constants::min, Constants::max) };
		IO::printGameWasStartedMessage();
		while (current_attemption > 0)
		{
			IO::printTryToGuessMessage();
			int guess{ IO::getNumber() };
			if (guess == secretNumber)
			{
				IO::printYouLostOrWonMessage(secretNumber, false);//false means won because it is "bool isLost"
				break;
			}
			if (--current_attemption != 0)
			{
				IO::printHintMessage(guess < secretNumber, current_attemption);
			}
			else
			{
				IO::printYouLostOrWonMessage(secretNumber, true); //true means lost because it is "bool isLost"
				
			}
		}
		
	}
}