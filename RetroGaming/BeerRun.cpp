#include "BeerRun.h"


/// <summary>
/// Initializes a new instance of the <see cref="BeerRun"/> class.
/// </summary>
BeerRun::BeerRun()
{
	_name = "Beer Run";
	_description = "Can you make it to the store to get the beer in time?";
}


/// <summary>
/// Finalizes an instance of the <see cref="BeerRun"/> class.
/// </summary>
BeerRun::~BeerRun()
{
}

/// <summary>
/// Plays this instance.
/// </summary>
void BeerRun::Play()
{
	cout << "Beer Run" << endl;
}