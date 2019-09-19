#include "GameBase.h"

GameBase::GameBase()
{
	_name = "Guess The Number";
	_description = "A game where you guess a random number from 1 to 100 in 10 tries or less";
}

GameBase::~GameBase()
{
}

void GameBase::Play()
{

}

std::string GameBase::getDescription()
{
	return _description;
}

std::string GameBase::getName()
{
	return _name;
}