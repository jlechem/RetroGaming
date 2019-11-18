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

#include "BlackJack.h"

BlackJack::BlackJack()
{
	_name = "Black Jack";
	_description = "A friendly game of Black Jack, or 21.";
}

BlackJack::~BlackJack()
{
}

void BlackJack::Play()
{
	auto bet = 0;
	auto maxBet = 25;
	auto playerMoney = 500;

	cout << endl << "Welcome to Black Jack!!" << endl 
		 << "Max Bet is $" << maxBet << endl;
	
	while (!isGameOver(playerMoney))
	{
		_deck.shuffle();

		cout << "$(" << playerMoney << ") Bet: $";
		cin >> bet;

		if (!cin.fail() && bet > 0 && bet < playerMoney)
		{

			// deal original cards to dealer and player
			_dealerHand.push_back(_deck.deal());
			_playerHand.push_back(_deck.deal());
			_dealerHand.push_back(_deck.deal());
			_playerHand.push_back(_deck.deal());

			printHands();

			auto choice = 1;

			do
			{
				cout << "1) Hit" << endl
					 << "2) Stand" << endl
				     << ":> ";

				cin >> choice;

				if (cin.fail() || (choice != 1 && choice != 2))
				{
					cin.ignore();
					cin.clear();
					cout << endl;
					continue;
				}
				else
				{
					_playerHand.push_back(_deck.deal());

					printHands();

				}
			} while (choice != 2);	
		}
		else
		{
			cin.ignore();
			cin.clear();
		}
	}
}

bool BlackJack::isGameOver(int playerMoney)
{
	auto gameOver = false;

	if (playerMoney <= 0)
	{
		gameOver = true;
	}

	return gameOver;

}

void BlackJack::printHands()
{
	cout << endl << "Dealer Hand" << endl
		<< _dealerHand[0]->getValue() << " " << _dealerHand[0]->getSuite() << " (" << _dealerHand[0]->getName() << ")" << endl
		<< "XX" << endl << endl
		<< "Player Hand" << endl;

		for (const auto& card : _playerHand)
		{
			cout << card->getValue() << " " << card->getSuite() << " (" << card->getName() << ")" << endl;
		}
}
