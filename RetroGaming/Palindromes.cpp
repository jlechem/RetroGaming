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


#include "Palindromes.h"

Palindromes::Palindromes()
{
	_name = "Palindromes";
	_description = "Find palindromes in a list of words";
}

Palindromes::~Palindromes()
{
}

void Palindromes::play()
{
	auto words = loadWords("C:/Users/ENSN/Documents/words.txt");

	vector<string> palindromes;

	for (const auto& word : *words)
	{
		if (word.size() > 0)
		{
			string reverseWord(word);
			reverse(reverseWord.begin(), reverseWord.end());

			if (word == reverseWord)
			{
				palindromes.push_back(word);
			}
		}
	}

	cout << endl << "Number of palindromes found: " << palindromes.size() << endl;

	printVectorOfString(palindromes);

}