#include "GameBase.h"

/// <summary>
/// Initializes a new instance of the <see cref="GameBase"/> class.
/// </summary>
GameBase::GameBase()
{
	_name = "Guess The Number";
	_description = "A game where you guess a random number from 1 to 100 in 10 tries or less";
}

/// <summary>
/// Finalizes an instance of the <see cref="GameBase"/> class.
/// </summary>
GameBase::~GameBase()
{
}

/// <summary>
/// Plays this instance.
/// </summary>
void GameBase::Play()
{

}

/// <summary>
/// Gets the description.
/// </summary>
/// <returns></returns>
std::string GameBase::getDescription()
{
	return _description;
}

/// <summary>
/// Gets the name.
/// </summary>
/// <returns></returns>
std::string GameBase::getName()
{
	return _name;
}