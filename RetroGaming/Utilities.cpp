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

	file.open(fileName, ios::out);

	if (file.is_open())
	{
		string line = "";

		while (getline(file, line))
		{
			words.push_back(line);
		}
	}

	file.close();

	return make_unique<vector<string>>(words);
}