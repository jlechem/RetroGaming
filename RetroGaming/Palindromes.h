#pragma once

#include <iostream>
#include <string>

#include "GameBase.h"
#include "Utilities.h"

using namespace std;

class Palindromes :
	public GameBase
{
public:
	Palindromes();
	~Palindromes();

	void Play();

};