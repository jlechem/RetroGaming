/*
	This file is part of {{ RetroGaming }}.

	Copyright [2019] [Justin LeCheminant]

	Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

 */

#include "GuessTheNumber.h"

GuessTheNumber::GuessTheNumber()
{
}

GuessTheNumber::~GuessTheNumber()
{
}

void GuessTheNumber::play()
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