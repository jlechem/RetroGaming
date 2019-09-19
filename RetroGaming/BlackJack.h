#pragma once

#include "GameBase.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"

using namespace std;

class BlackJack :
	public GameBase
{
public:
	BlackJack();
	~BlackJack();

	void Play();

private:
	unique_ptr<Deck> p_Deck;

	unique_ptr<Player> p_Player;

	unique_ptr<Dealer> p_Dealer;

};

