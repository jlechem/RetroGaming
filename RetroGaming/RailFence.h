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

#include <math.h>

#include "GameBase.h"

class RailFence :
	public GameBase
{
public:
	RailFence();
	RailFence(unsigned int, unsigned int);
	~RailFence();

	void Play() override;

private:
	int _rows;
	int _initialOffset;

	vector<string> _encryptedData;

	unique_ptr<vector<string>> Encrypt(string);

};
