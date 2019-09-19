#include "HangMan.h"

HangMan::HangMan()
{
	_name = "Hangman";
	_description = "Hangman, guess the word without dieing";
}

HangMan::~HangMan()
{
}

void HangMan::Play()
{
	cout << "You Win" << endl;
}