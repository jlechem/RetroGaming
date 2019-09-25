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