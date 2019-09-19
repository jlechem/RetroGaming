#pragma once

#include <string>
#include <clocale>

#include "CardSuites.h"

using namespace std;

class Card
{
public:
	Card();
	Card(CardSuites, int, string);
	~Card();

	void setSuite(CardSuites);
	string getSuite();

	int getValue();

	string getName();

	string print();

	bool isAce();

private:
	CardSuites _suite;
	int _value;
	string _name;
	
};