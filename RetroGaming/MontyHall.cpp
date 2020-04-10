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

#include "MontyHall.h"

MontyHall::MontyHall()
{
	_name = "Monty Hall Simulation";
	_description = "Monty hall simulation for the 3 door game on Win, Lose, or Draw!";
}

MontyHall::~MontyHall()
{
}

void MontyHall::play()
{
	auto iterations = 1000000;

	auto first_choice_wins = 0.0;
	auto second_choice_wins = 0.0;

	char doors[3]{ 'a', 'b', 'c' };

	cout << "Welcome to the Monty Hall Simulator" << endl
		<< "This example shows the odss from picking the second door in a Win, Lose, or Draw bonus round" << endl << endl;

	for (auto i = 0; i < iterations; i++)
	{
		auto winner = doors[getRandomNumber(2)];
		auto pick = doors[getRandomNumber(2)];

		if (winner == pick)
		{
			first_choice_wins++;
		}
		else
		{
			second_choice_wins++;
		}
	}

	cout
		<< "Total iterations: " << iterations << endl
		<< "First Pick Wins: " << first_choice_wins << endl
		<< "Second Pick Wins: " << second_choice_wins << endl 
		<< fixed << setprecision(2)
		<< "Probability of first choice win: " << (first_choice_wins / iterations ) << endl
		<< "Probability of second choice win: " << (second_choice_wins / iterations) << endl << endl;

}
