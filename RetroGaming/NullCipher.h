#pragma once

#include "GameBase.h"

class NullCipher :
	public GameBase
{
public:
	NullCipher();
	~NullCipher();

	void Play();

private:
	string _fileText;

};

