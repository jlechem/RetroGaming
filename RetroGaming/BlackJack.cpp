#include "BlackJack.h"

/// <summary>
/// Initializes a new instance of the <see cref="BlackJack"/> class.
/// </summary>
BlackJack::BlackJack()
{
	_name = "Black Jack";
	_description = "A friendly game of Black Jack, or 21.";
}

/// <summary>
/// Finalizes an instance of the <see cref="BlackJack"/> class.
/// </summary>
BlackJack::~BlackJack()
{
}

/// <summary>
/// Plays this instance.
/// </summary>
void BlackJack::Play()
{
	auto bet = 0;
	auto maxBet = 25;
	auto playerMoney = 500;
	auto playerTotal = 0;
	auto dealerTotal = 0;

	cout << endl << "Welcome to Black Jack!!" << endl 
		 << "Max Bet is $" << maxBet << endl;
	
	while (!isGameOver(playerMoney))
	{
		_deck.shuffle();

		cout << "$(" << playerMoney << ") Bet: $";
		cin >> bet;

		if (!cin.fail() && bet > 0 && bet < playerMoney)
		{
			int dealerTotal = 0;
			int playerTotal = 0;

			// deal original cards to dealer and player
			_dealerHand.push_back(_deck.deal());
			_playerHand.push_back(_deck.deal());
			_dealerHand.push_back(_deck.deal());
			_playerHand.push_back(_deck.deal());

			cout << endl << "Dealer Hand" << endl
				<< _dealerHand[0]->getValue() << " " << _dealerHand[0]->getSuite() << " (" << _dealerHand[0]->getName() << ")" << endl
				<< "XX" << endl << endl
				<< "Player Hand" << endl
				<< _playerHand[0]->getValue() << " " << _playerHand[0]->getSuite() << " (" << _playerHand[0]->getName() << ")" << endl
				<< _playerHand[1]->getValue() << " " << _playerHand[1]->getSuite() << " (" << _playerHand[1]->getName() << ")" << endl << endl;

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

/// <summary>
/// Determines whether [is game over].
/// </summary>
/// <returns>
///   <c>true</c> if [is game over]; otherwise, <c>false</c>.
/// </returns>
bool BlackJack::isGameOver(int playerMoney)
{
	auto gameOver = false;

	if (playerMoney <= 0)
	{
		gameOver = true;
	}

	return gameOver;

}