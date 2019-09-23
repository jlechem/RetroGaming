#include <iostream>

#include "GuessTheNumber.h"

using namespace std;

/// <summary>
/// Initializes a new instance of the <see cref="GuessTheNumber"/> class.
/// </summary>
GuessTheNumber::GuessTheNumber()
{
}

/// <summary>
/// Finalizes an instance of the <see cref="GuessTheNumber"/> class.
/// </summary>
GuessTheNumber::~GuessTheNumber()
{
}

/// <summary>
/// Plays this instance.
/// </summary>
void GuessTheNumber::Play()
{
	cout << "Welcome to guess the number" << endl << endl
		<< "Your goal is to guess the number between 1 and 100 in 10 tries or less" << endl << endl;

	int numberOfTries = 0;
	int numberToGuess = getRandomIndex(100);
	int maxNumberOfTries = 10;
	int currentGuess = 0;

	bool wonGame = false;

	do
	{
		cout << endl << "Guess(" << numberOfTries + 1 << "): ";
		cin >> currentGuess;

		if (!cin.fail() && currentGuess > 0 && currentGuess <= 100)
		{
			if (currentGuess == numberToGuess)
			{
				wonGame = true;
				break;
			}
			else
			{
				if (currentGuess > numberToGuess)
				{
					cout << "Too High" << endl;
				}
				else
				{
					cout << "Too Low" << endl;
				}

				numberOfTries++;

			}
		}
		else
		{
			cin.clear();
			cin.ignore();
			cout << "Invalid guess" << endl;
			continue;
		}
	} while (numberOfTries < maxNumberOfTries);

	if (wonGame)
	{
		cout << endl << "Congratulations you guessed the secret number: " << numberToGuess << " in " << numberOfTries << " tries." << endl;
	}
	else
	{
		cout << endl << "Sorry you didn't guess the secret number: " << numberToGuess << " in 10 tries or less." << endl;
	}
}