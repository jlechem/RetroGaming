#include "Palindromes.h"

Palindromes::Palindromes()
{
	_name = "Palindromes";
	_description = "Find palindromes in a list of words";
}

Palindromes::~Palindromes()
{
}

void Palindromes::Play()
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