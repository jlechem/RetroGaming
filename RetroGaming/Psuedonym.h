#pragma once

#include "GameBase.h"

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