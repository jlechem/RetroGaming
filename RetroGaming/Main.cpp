#include <vector>
#include <iostream>

#include "GuessTheNumber.h"
#include "HangMan.h"
#include "BeerRun.h"
#include "BlackJack.h"
#include "Psuedonym.h"

using namespace std;

vector<shared_ptr<GameBase>> GetGames();
void PrintNames(vector<shared_ptr<GameBase>> games);
shared_ptr<GameBase> GetGameToPlay();


int main(int argc, char** argv)
{
	auto gameToPlay = GetGameToPlay();
	
	cout << endl << endl;

	gameToPlay->Play();

	return 0;

}


// FUNCTIONS

/// <summary>
/// Gets the games.
/// </summary>
/// <returns></returns>
vector<shared_ptr<GameBase>> GetGames()
{
	vector<shared_ptr<GameBase>> games;

	auto guessTheNumber = make_shared<GuessTheNumber>();
	games.push_back(std::move(guessTheNumber));

	auto hangman = make_shared<HangMan>();
	games.push_back(std::move(hangman));

	auto beerrun = make_shared<BeerRun>();
	games.push_back(std::move(beerrun));

	auto blackjack = make_shared<BlackJack>();
	games.push_back(std::move(blackjack));

	auto psuedonyme = make_shared<Psuedonym>();
	games.push_back(std::move(psuedonyme));

	return games;

}

/// <summary>
/// Prints the names.
/// </summary>
/// <param name="games">The games.</param>
void PrintNames(vector<shared_ptr<GameBase>> games)
{
	auto counter = 1;

	cout << "Select a game" << endl << endl;

	for (const auto& game : games)
	{
		cout << "(" << counter << ") " << game->getName() << endl;
		counter++;
	}
}

/// <summary>
/// Gets the game to play.
/// </summary>
/// <returns></returns>
shared_ptr<GameBase> GetGameToPlay()
{
	auto games = GetGames();

	auto maxIndex = games.size();
	auto index = 0;
	
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
