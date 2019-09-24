#pragma once

#include "GameBase.h"
#include "Deck.h"

class BlackJack :
	public GameBase
{
public:
	BlackJack();
	~BlackJack();

	void Play();

private:
	Deck _deck;

	vector<unique_ptr<Card>> _playerHand;
	vector<unique_ptr<Card>> _dealerHand;

	bool isGameOver(int);
	bool isAce(int value);
	void printHands();

};