#pragma once

#include <iostream>

#include "GameBase.h"

using namespace std;

class HangMan :
	public GameBase
{
public:
	HangMan();
	~HangMan();

	void Play();

};