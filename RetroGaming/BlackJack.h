#pragma once

#include <clocale>

#include "GameBase.h"
#include "Deck.h"

using namespace std;

class BlackJack :
	public GameBase
{
public:
	BlackJack();
	~BlackJack();

	void Play();

private:
	Deck _deck;

	bool isGameOver(int);

	vector<unique_ptr<Card>> _playerHand;
	vector<unique_ptr<Card>> _dealerHand;

};