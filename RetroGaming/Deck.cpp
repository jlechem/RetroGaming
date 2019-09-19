#include "Deck.h"

/// <summary>
/// Initializes a new instance of the <see cref="Deck"/> class.
/// </summary>
Deck::Deck()
{
	p_Cards = make_unique<vector<unique_ptr<Card>>>();
	p_ShuffledCards = make_unique<vector<unique_ptr<Card>>>();
}


/// <summary>
/// Finalizes an instance of the <see cref="Deck"/> class.
/// </summary>
Deck::~Deck()
{
}

void Deck::shuffle()
{
}

void Deck::loadCards()
{
	// create a 52 card deck

	// spades
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 2, "Two of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 3, "Three of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 4, "Four of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 5, "Five of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 6, "Six of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 7, "Seven of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 8, "Eight of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 9, "Nine of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 10, "Ten of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 10, "Jack of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 10, "Queen of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 10, "King of Spades")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Spade, 11, "Ace of Spades")));

	// hearts
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 2, "Two of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 3, "Three of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 4, "Four of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 5, "Five of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 6, "Six of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 7, "Seven of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 8, "Eight of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 9, "Nine of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 10, "Ten of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 10, "Jack of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 10, "Queen of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 10, "King of Hearts")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Heart, 11, "Ace of Hearts")));

	// diamonds
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 2, "Two of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 3, "Three of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 4, "Four of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 5, "Five of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 6, "Six of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 7, "Seven of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 8, "Eight of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 9, "Nine of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 10, "Ten of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 10, "Jack of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 10, "Queen of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 10, "King of Diamonds")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Diamond, 11, "Ace of Diamonds")));

	// clubs
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 2, "Two of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 3, "Three of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 4, "Four of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 5, "Five of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 6, "Six of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 7, "Seven of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 8, "Eight of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 9, "Nine of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 10, "Ten of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 10, "Jack of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 10, "Queen of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 10, "King of Clubs")));
	p_Cards->push_back(make_unique<Card>(Card(CardSuites::Club, 11, "Ace of Clubs")));

}
