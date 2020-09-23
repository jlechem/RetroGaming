#pragma once

#include <chrono>
#include <thread>
#include <functional>

#include "GameBase.h"

class Pong: public GameBase
{
public:
	Pong();

	void play();

private:
	unsigned long _score;
};