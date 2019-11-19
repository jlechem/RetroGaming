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

#include "Transposition.h"

Transposition::Transposition()
{
	_name = "Transposition cipher";
	_description = "Create a basic transposition cipher";

	_letters[0] = 'A';
	_letters[1] = 'B';
	_letters[2] = 'C';
	_letters[3] = 'D';
	_letters[4] = 'E';
	_letters[5] = 'F';
	_letters[6] = 'G';
	_letters[7] = 'H';
	_letters[8] = 'I';
	_letters[9] = 'J';
	_letters[10] = 'K';
	_letters[11] = 'L';
	_letters[12] = 'M';
	_letters[13] = 'N';
	_letters[14] = 'O';
	_letters[15] = 'P';
	_letters[16] = 'Q';
	_letters[17] = 'R';
	_letters[18] = 'S';
	_letters[19] = 'T';
	_letters[20] = 'U';
	_letters[21] = 'V';
	_letters[22] = 'W';
	_letters[23] = 'X';
	_letters[24] = 'Y';
	_letters[25] = 'Z';
}

Transposition::~Transposition()
{
}

void Transposition::Play()
{
	string text;

	cout << "Welcome to Transposition cipher" << endl
		<< "This will take some text and randomly transpose the letters for you!" << endl << endl
		<< "Enter text to transpose (alpha characters only [A-Z] will be transposed): " << flush;

	cin.ignore();

	getline(cin, text);

	auto transposedText = EncryptString(text);

	cout << endl << "The transposed(encrypted) text is: " << transposedText << endl;

}

string Transposition::EncryptString(string original, int offset)
{
	string result;

	if (offset == 0)
	{
		offset = getRandomNumber(0, 25);
	}

	for (const auto& letter : original)
	{
		auto newLetter = GetEncryptedLetter(letter, offset);
		
		result += newLetter;
	}

	auto writeResult = WriteTextToFile(result);

	return result;
}

string Transposition::DecryptString(string/*original*/, int offset)
{
	if (offset == 0)
	{
		offset = getRandomNumber(1, 26);
	}

	return string();
}

void Transposition::EncryptFile(string file, string destination, int offset)
{
	if (offset == 0)
	{
		offset = getRandomNumber(1, 26);
	}

	// TODO: Implement encrypt file

}

void Transposition::DecryptFile(string /*file*/, int offset)
{
	if (offset == 0)
	{
		offset = getRandomNumber(1, 26);
	}
}

int Transposition::GetLetterIndex(char letter)
{
	auto index = -1;

	for (auto i = 0; i < 26; i++)
	{
		if (toupper(letter) == _letters[i])
		{
			index = i;
			break;
		}
	}

	return index;
	
}

char Transposition::GetEncryptedLetter(char letter, int offset)
{
	auto currentLetterIndex = GetLetterIndex(letter);

	auto result = letter;

	if (currentLetterIndex >= 0)
	{
		auto newLetterIndex = currentLetterIndex + offset > 25 ?
			offset - (25 - currentLetterIndex) :
			currentLetterIndex + offset;

		result = _letters[newLetterIndex];

	}

	return result;

}
