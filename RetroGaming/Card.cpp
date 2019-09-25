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

#include "Card.h"

Card::Card()
{
}

Card::Card(CardSuites suite, int value, string name)
{
	_suite = suite;
	_value = value;
	_name = name;
}

Card::~Card()
{
}

void Card::setSuite(CardSuites suite)
{
	_suite = suite;
}

string Card::getSuite()
{
	string suite = "";

	switch (_suite)
	{
		case Spade:
			suite = "\3";
			break;
	
		case Diamond:
			suite = "\0";
			break;

		case Heart:
			suite = "\1";
			break;
	
		case Club:
			suite = "\2";
			break;
	}

	return suite;
}

int Card::getValue()
{
	return _value;
}

string Card::getName()
{
	return _name;
}

string Card::print()
{
	return string();
}

bool Card::isAce()
{
	return _value == 1 || _value == 11;
}
