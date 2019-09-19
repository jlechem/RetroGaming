#pragma once

#include <string>

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

