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

#include "Anagrams.h"

Anagrams::Anagrams()
{
	_name = "Anagrams";
	_description = "Find the anagrams from your word";
}

Anagrams::~Anagrams()
{
}

void Anagrams::Play()
{
 	string enteredWord;

	auto words = loadWords("C:/Users/ENSN/Documents/words.txt");

	cout << endl << "Welcome to Anagrams!!" << endl << endl;

	vector<string> anagrams;

	while (true)
	{
		anagrams.clear();

		cin.clear();

		cout << "Enter a word ('Q/q' to quit): ";
		cin >> enteredWord;

		trim(enteredWord);

		auto originalWord = string(enteredWord);

		if (enteredWord.size() > 0 && enteredWord != "Q" && enteredWord != "q" )
		{
			sort(enteredWord.begin(), enteredWord.end());

			for (const auto& word : *words)
			{
				auto copy = string(word);

				sort(copy.begin(), copy.end());

				if (copy == enteredWord && originalWord != word)
				{
					anagrams.push_back(word);
				}
			}

			cout << endl << "Anagrams for (" << originalWord << "): " << anagrams.size() << endl;

			printVectorOfString(anagrams);

		}
		else
		{
			break;
		}
	}
}