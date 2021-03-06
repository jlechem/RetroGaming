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
//#include "uuid.h"

int getRandomIndex(long max)
{
	std::random_device random_device;
	std::mt19937 engine{ random_device() };
	std::uniform_int_distribution<int> dist(0, max);
	return dist(engine);
}

int getRandomNumber(long max)
{
	std::random_device random_device;
	std::mt19937 engine{ random_device() };
	std::uniform_int_distribution<int> dist(0, max);
	return dist(engine);
}

int getRandomNumber(long min, long max)
{
	std::random_device random_device;
	std::mt19937 engine{ random_device() };
	std::uniform_int_distribution<int> dist(min, max);
	return dist(engine);
}

std::unique_ptr<std::vector<std::string>> loadWords(std::string fileName)
{
	std::vector<std::string> words;

	std::fstream file;

	file.open(fileName, std::ios::in);

	if (file.is_open())
	{
		std::string line = "";

		while (std::getline(file, line))
		{
			trim(line);

			if (line.size() > 0)
			{
				words.push_back(line);
			}
		}
	}

	file.close();

	return std::make_unique<std::vector<std::string>>(words);
}

void trim(std::string value)
{
	value.erase(value.find_last_not_of(" \n\r\t") + 1);
}

std::string reverseString(std::string word)
{
	auto reversedWord = std::string(word);
	std::reverse(reversedWord.begin(), reversedWord.end());
	return reversedWord;
}

std::string loadFileIntoString(std::string fileName)
{
	std::string text;

	std::fstream file;

	file.open(fileName, std::ios::in);

	if (file.is_open())
	{
		std::string line = "";

		while (std::getline(file, line))
		{
			trim(line);
			text.append(line);
		}
	}

	file.close();

	return text;
}

void printVectorOfString(const std::vector<std::string> &items)
{
	for (const auto& item : items)
	{
		std::cout << item << std::endl;
	}

	std::cout << std::endl << std::endl;

}

std::string GenerateRandomFileName()
{
    return "GUID.txt";
}

bool WriteTextToFile(std::string text, std::string file, bool truncate)
{
	auto result = false;

	std::ofstream outputFile;
	
	auto options = truncate ? std::ios::out | std::ios::trunc : std::ios::out | std::ios::app;

	outputFile.open(file, options);

	if (outputFile.is_open())
	{
		outputFile << text << std::endl;
		outputFile.close();

		result = true;

	}

	return result;
}

bool WriteTextToFile(std::string text, bool truncate)
{
	auto result = false;

	std::ofstream outputFile;

	auto file = GenerateRandomFileName();
	
	auto options = truncate ? std::ios::out | std::ios::trunc : std::ios::out | std::ios::app;

	outputFile.open(file, options);

	if (outputFile.is_open())
	{
		outputFile << text << std::endl;
		outputFile.close();

		result = true;

	}

	return result;
}

bool WriteVectorToFile(std::shared_ptr<std::vector<std::string>> items, std::string filename, bool truncate)
{
	auto result = false;

	std::ofstream outputFile;

	auto options = truncate ? std::ios::out | std::ios::trunc : std::ios::out | std::ios::app;
	
	outputFile.open(filename, options);

	if (outputFile.is_open())
	{
		for (const auto& item : *items)
		{
			outputFile << item << std::endl;
		}

		outputFile.close();

		result = true;

	}

	return result;
}
