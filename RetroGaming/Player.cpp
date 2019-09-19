#include "Player.h"

/// <summary>
/// Initializes a new instance of the <see cref="Player"/> class.
/// </summary>
Player::Player()
{
	p_Hand = make_unique<vector<unique_ptr<Card>>>();
}

/// <summary>
/// Finalizes an instance of the <see cref="Player"/> class.
/// </summary>
Player::~Player()
{
}

/// <summary>
/// Adds the card.
/// </summary>
/// <param name="newCard">The new card.</param>
void Player::addCard(unique_ptr<Card> newCard)
{
	p_Hand->push_back(std::move(newCard));
}

/// <summary>
/// Releases the hand.
/// </summary>
/// <returns></returns>
unique_ptr<vector<unique_ptr<Card>>> Player::releaseHand()
{
	return std::move(p_Hand);
}

/// <summary>
/// Calculates the hand.
/// </summary>
/// <returns></returns>
int Player::calculateHand()
{
	return 0;
}
