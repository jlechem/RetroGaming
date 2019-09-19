#pragma once

#include "Card.h"

#include <vector>

using namespace std;

class Player
{
public:
	Player();
	~Player();

	void addCard(unique_ptr<Card>);
	
	unique_ptr<vector<unique_ptr<Card>>> releaseHand();
	
	int calculateHand();

private:
	unique_ptr<vector<unique_ptr<Card>>> p_Hand;

};