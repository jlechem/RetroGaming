#pragma once

#include <iostream>
#include <string>
#include <clocale>
#include <vector>

#include "Utilities.h"

using namespace std;

class GameBase
{
public:
	GameBase();
	~GameBase();

	virtual void Play();

	std::string getDescription();
	
	std::string getName();

protected:
	std::string _description;
	std::string _name;
};

