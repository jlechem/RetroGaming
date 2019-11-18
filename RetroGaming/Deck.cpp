/*
	This file is part of {{ RetroGaming }}.

	Copyright [2019] [Justin LeCheminant]

	Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

 */

#include "Deck.h"

Deck::Deck()
{
}

Deck::~Deck()
{
}

void Deck::shuffle()
{
	_cards.clear();
	_shuffledCards.clear();

	loadCards();

	// go through our 52 cards and randomly pick them 
	// from the straight deck and add them to the shuffled deck
	for (auto i = 51; i >= 0; i--)
	{
		int nextCardIndex = getRandomIndex(i);

		_shuffledCards.push_back(std::move(_cards[nextCardIndex]));
		_cards.erase(_cards.begin() + nextCardIndex);

	}
}

unique_ptr<Card> Deck::deal()
{
	auto card = std::move(_shuffledCards[0]);
	
	_shuffledCards.erase(_shuffledCards.begin());

	return card;

}

void Deck::loadCards()
{
	// create a 52 card deck

	// spades
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 2, "Two of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 3, "Three of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 4, "Four of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 5, "Five of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 6, "Six of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 7, "Seven of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 8, "Eight of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 9, "Nine of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 10, "Ten of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 10, "Jack of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 10, "Queen of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 10, "King of Spades")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Spade, 11, "Ace of Spades")));

	// hearts
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 2, "Two of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 3, "Three of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 4, "Four of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 5, "Five of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 6, "Six of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 7, "Seven of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 8, "Eight of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 9, "Nine of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 10, "Ten of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 10, "Jack of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 10, "Queen of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 10, "King of Hearts")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Heart, 11, "Ace of Hearts")));

	// diamonds
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 2, "Two of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 3, "Three of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 4, "Four of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 5, "Five of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 6, "Six of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 7, "Seven of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 8, "Eight of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 9, "Nine of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 10, "Ten of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 10, "Jack of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 10, "Queen of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 10, "King of Diamonds")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Diamond, 11, "Ace of Diamonds")));

	// clubs
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 2, "Two of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 3, "Three of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 4, "Four of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 5, "Five of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 6, "Six of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 7, "Seven of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 8, "Eight of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 9, "Nine of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 10, "Ten of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 10, "Jack of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 10, "Queen of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 10, "King of Clubs")));
	_cards.push_back(make_unique<Card>(Card(CardSuites::Club, 11, "Ace of Clubs")));

}
