#include "Card.h"

/// <summary>
/// Initializes a new instance of the <see cref="Card"/> class.
/// </summary>
Card::Card()
{
}

/// <summary>
/// Initializes a new instance of the <see cref="Card"/> class.
/// </summary>
/// <param name="">The .</param>
/// <param name="">The .</param>
/// <param name="">The .</param>
Card::Card(CardSuites suite, int value, string name)
{
	_suite = suite;
	_value = value;
	_name = name;
}

/// <summary>
/// Finalizes an instance of the <see cref="Card"/> class.
/// </summary>
Card::~Card()
{
}

/// <summary>
/// Sets the suite.
/// </summary>
/// <param name="suite">The suite.</param>
void Card::setSuite(CardSuites suite)
{
	_suite = suite;
}

/// <summary>
/// Gets the value.
/// </summary>
/// <returns></returns>
int Card::getValue()
{
	return _value;
}

/// <summary>
/// Gets the name.
/// </summary>
/// <returns></returns>
string Card::getName()
{
	return _name;
}

/// <summary>
/// Prints this instance.
/// </summary>
/// <returns></returns>
string Card::print()
{
	return string();
}

/// <summary>
/// Determines whether this instance is an ace card.
/// </summary>
/// <returns>
///   <c>true</c> if this instance is an ace card; otherwise, <c>false</c>.
/// </returns>
bool Card::isAce()
{
	return _value == 1 || _value == 11;
}
