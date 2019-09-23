#include "Utilities.h"

int getRandomIndex(long max)
{
	random_device random_device;
	mt19937 engine{ random_device() };
	uniform_int_distribution<int> dist(0, max);
	return dist(engine);
}