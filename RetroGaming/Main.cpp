#include <vector>
#include <iostream>

#include "GuessTheNumber.h"

using namespace std;

vector<GameBase*>* GetGames();
void PrintNames(vector<GameBase*>* games);

int main(int argc, char** argv)
{
	auto games = GetGames();
	PrintNames(games);

	GuessTheNumber game;

	game.Play();

	return 0;

}


// FUNCTIONS
vector<GameBase*>* GetGames()
{
	auto games = new vector<GameBase*>();

	games->push_back(new GuessTheNumber());

	return games;

}

void PrintNames(vector<GameBase*>* games)
{
	auto counter = 1;

	for (vector<GameBase*>::iterator it = games->begin(); it != games->end(); ++it)
	{
		cout << "(" << counter << ") " << (*it)->getName() << endl;
	}
}