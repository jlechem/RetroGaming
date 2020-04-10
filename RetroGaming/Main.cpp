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

#include <vector>
#include <iostream>

#include "GuessTheNumber.h"
#include "HangMan.h"
#include "BeerRun.h"
#include "BlackJack.h"
#include "Psuedonym.h"
#include "Palindromes.h"
#include "Anagrams.h"
#include "NullCipher.h"
#include "MonsterRats.h"
#include "MontyHall.h"
#include "Substitution.h"
#include "RailFence.h"

using namespace std;

vector<GameBase> GetGames();
void PrintNames(vector<GameBase> games);
GameBase GetGameToPlay();


int main()
{
	auto gameToPlay = GetGameToPlay();
	
	cout << endl << endl;

	gameToPlay.play();

	return 0;

}


// FUNCTIONS
vector<GameBase> GetGames()
{
	vector<GameBase> games;

	// TODO: Find a way to load these in a DI like manner

	auto guessTheNumber = GuessTheNumber();
	games.push_back(guessTheNumber);

	auto hangman = HangMan();
	games.push_back(hangman);

	auto beerrun = BeerRun();
	games.push_back(beerrun);

	auto blackjack = BlackJack();
	games.push_back(blackjack);

	auto psuedonyme = Psuedonym();
	games.push_back(psuedonyme);

	auto palindromes = Palindromes();
	games.push_back(palindromes);

	auto anagrams = Anagrams();
	games.push_back(anagrams);

	auto null_cipher = NullCipher();
	games.push_back(null_cipher);

	auto rats = MonsterRats();
	games.push_back(rats);

	auto montyHall = MontyHall();
	games.push_back(montyHall);

	auto substitution = Substitution();
	games.push_back(substitution);

	auto fence = RailFence();
	games.push_back(fence);

	return games;

}

void PrintNames(vector<GameBase> games)
{
	auto counter = 1;

	cout << "Select a game" << endl << endl;
	
	for (auto it = games.begin(); it != games.end(); it++)
	{
		cout << "(" << counter++ << ") " << (*it).getName() << endl;
	}
}

GameBase GetGameToPlay()
{
	auto games = GetGames();

	auto maxIndex = games.size();
	auto index = decltype(maxIndex){};
	
	auto validChoice = true;

	do
	{
		PrintNames(games);

		cout << endl << "Selection: ";
		cin >> index;

		if (cin.fail() || index <= 0 || index > maxIndex )
		{
			validChoice = false;
			cin.clear();
			cin.ignore();
			cout << "Invalid Selection" << endl << endl;
		}
		else
		{
			validChoice = true;
		}
	} while (!validChoice);
	
	return games[index - 1];

}