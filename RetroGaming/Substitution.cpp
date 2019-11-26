/*
	This file is part of {{ RetroGaming }}.

	Copyright [2019] [Justin LeCheminant]

	Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

 */

#include "Substitution.h"

Substitution::Substitution()
{
	_name = "Substitution cipher";
	_description = "Create a basic transposition cipher";

	_offset = getRandomNumber(0, 25);

	BuildEncryptionMap();

}

Substitution::~Substitution()
{
}

void Substitution::BuildEncryptionMap()
{
	string original = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (auto i = 0; i < original.size(); i++)
	{
		auto newLetterIndex = i + _offset > 25 ?
			_offset - (25 - i) :
			i + _offset;

		char originalLetter = original[i];

		_encryptionMap[originalLetter] = original[newLetterIndex];
	}
}

void Substitution::Play()
{
	string text;

	cout << "Welcome to Substitution cipher" << endl
		<< "This will take some text and randomly transpose the letters for you!" << endl << endl
		<< "Enter text to transpose (alpha characters only [A-Z] will be transposed): " << flush;

	cin.ignore();

	getline(cin, text);

	auto transposedText = EncryptString(text);

	cout << endl << "The transposed(encrypted) text is: " << transposedText << endl;

}

void Substitution::UpdateOffset(int offset)
{
	if (_offset > 0 && offset < 26)
	{
		_offset = offset;

		BuildEncryptionMap();

	}
}

string Substitution::EncryptString(string original)
{
	string result;

	for (const auto& letter : original)
	{
		auto newLetter = GetEncryptedLetter(letter);
		
		result += newLetter;
	}

	return result;
}

string Substitution::DecryptString(string/*original*/)
{
	return string();
}

void Substitution::EncryptFile(string file, string destination)
{
	std::ofstream output(destination, std::ios::out | std::ios::trunc);

	std::ifstream input(file, std::ios::in);

	if (output.is_open() && input.is_open())
	{
		char currentLetter;

		while (input.get(currentLetter))
		{
			auto encryptedLetter = GetEncryptedLetter(currentLetter);
			output << encryptedLetter;
		}

		input.close();
		output.close();
	}
}

void Substitution::DecryptFile(string /*file*/)
{
}

char Substitution::GetEncryptedLetter(char letter)
{
	char result = toupper(letter);

	auto charResult = _encryptionMap.find(result);

	if (charResult != _encryptionMap.end())
	{
		result = charResult->second;
	}

	return result;

}
