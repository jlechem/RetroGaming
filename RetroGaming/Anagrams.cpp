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