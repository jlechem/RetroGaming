#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "GameBase.h"
#include "Utilities.h"

using namespace std;

class Psuedonym :
	public GameBase
{
public:
	Psuedonym();
	~Psuedonym();

	void Play();

private:
	vector<string> _firstNames;
	vector<string> _lastNames;

	void loadFirstNames();
	void loadSecondNames();

};