#pragma once

#include <iostream>
#include <vector>

#include "Card.h"
#include "Utilities.h"

using namespace std;

class Deck
{
public:
	Deck();
	~Deck();

	void shuffle();

	unique_ptr<Card> deal();

private:
	void loadCards();

	vector<unique_ptr<Card>> _cards;
	vector<unique_ptr<Card>> _shuffledCards;
};