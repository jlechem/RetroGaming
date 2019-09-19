#include <vector>
#include <iostream>

#include "GuessTheNumber.h"
#include "HangMan.h"

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
vector<shared_ptr<GameBase>> GetGames()
{
	vector<shared_ptr<GameBase>> games;

	auto guessTheNumber = make_shared<GuessTheNumber>();
	games.push_back(std::move(guessTheNumber));

	auto hangman = make_shared<HangMan>();
	games.push_back(std::move(hangman));

	return games;

}

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
