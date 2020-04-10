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

#pragma once

#include "GameBase.h"
#include "Rat.h"

// Constants, all in metric
const int GOAL = 5000;
const int NUM_RATS = 20;
const int INITIAL_MIN_WT = 200;
const int INITIAL_MAX_WT = 600;
const int INITIAL_MODE_WT = 300;
const double MUTATE_ODDS = 0.01;
const double MUTATE_MAX = 1.2;
const int LITTER_SIZE = 8;
const int LITTERS_PER_YEAR = 10;
const int GENERATION_LIMIT = 500;

class MonsterRats :
	public GameBase
{
public:
	MonsterRats();
	~MonsterRats();

	void play() override;

private:
	vector<Rat> _rats;

	void populate(long minimumWeight, long maximumWeight, long modeWeight);

};
