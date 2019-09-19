#pragma once

#include "Card.h"

#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Deck
{
public:
	Deck();
	~Deck();

	void shuffle();

private:
	void loadCards();

	unique_ptr<vector<unique_ptr<Card>>> p_Cards;
	unique_ptr<vector<unique_ptr<Card>>> p_ShuffledCards;
};