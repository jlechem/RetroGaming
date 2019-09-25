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

#include "Utilities.h"

int getRandomIndex(long max)
{
	random_device random_device;
	mt19937 engine{ random_device() };
	uniform_int_distribution<int> dist(0, max);
	return dist(engine);
}

unique_ptr<vector<string>> loadWords(string fileName)
{
	vector<string> words;

	fstream file;

	file.open(fileName, ios::in);

	if (file.is_open())
	{
		string line = "";

		while (getline(file, line))
		{
			trim(line);

			if (line.size() > 0)
			{
				words.push_back(line);
			}
		}
	}

	file.close();

	return make_unique<vector<string>>(words);
}

void trim(string value)
{
	value.erase(value.find_last_not_of(" \n\r\t") + 1);
}

string reverseString(string word)
{
	auto reversedWord = string(word);
	reverse(reversedWord.begin(), reversedWord.end());
	return reversedWord;
}

string loadFileIntoString(string fileName)
{
	string text;

	fstream file;

	file.open(fileName, ios::in);

	if (file.is_open())
	{
		string line = "";

		while (getline(file, line))
		{
			trim(line);
			text.append(line);
		}
	}

	file.close();

	return text;
}

void printVectorOfString(const vector<string> &items)
{
	for (const auto& item : items)
	{
		cout << item << endl;
	}

	cout << endl << endl;

}