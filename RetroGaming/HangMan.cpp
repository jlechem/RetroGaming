#include "HangMan.h"

/// <summary>
/// Initializes a new instance of the <see cref="HangMan"/> class.
/// </summary>
HangMan::HangMan()
{
	_name = "Hangman";
	_description = "Hangman, guess the word without dieing";
}

/// <summary>
/// Finalizes an instance of the <see cref="HangMan"/> class.
/// </summary>
HangMan::~HangMan()
{
}

/// <summary>
/// Plays this instance.
/// </summary>
void HangMan::Play()
{
	cout << "You Win" << endl;
}