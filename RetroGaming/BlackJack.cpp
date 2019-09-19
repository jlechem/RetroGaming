#include "BlackJack.h"

/// <summary>
/// Initializes a new instance of the <see cref="BlackJack"/> class.
/// </summary>
BlackJack::BlackJack()
{
	_name = "Black Jack";
	_description = "A friendly game of Black Jack, or 21.";

	p_Deck = make_unique<Deck>();
	p_Player = make_unique<Player>();
	p_Dealer = make_unique<Dealer>();
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

}