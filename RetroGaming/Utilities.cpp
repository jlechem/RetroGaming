#include "Utilities.h"

/// <summary>
/// Gets the random index.
/// </summary>
/// <param name="max">The maximum.</param>
/// <returns></returns>
int getRandomIndex(long max)
{
	random_device random_device;
	mt19937 engine{ random_device() };
	uniform_int_distribution<int> dist(0, max);
	return dist(engine);
}

/// <summary>
/// Loads the words.
/// </summary>
/// <param name="fileName">Name of the file.</param>
/// <returns></returns>
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

/// <summary>
/// Trims the specified value.
/// </summary>
/// <param name="value">The value.</param>
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