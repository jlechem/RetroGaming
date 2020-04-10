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


#include "RailFence.h"


RailFence::RailFence()
{
	_name = "Rail Fence Cipher";
	_description = "Creates a Rail Fence cipher";

	_rows = 3;
	_initialOffset = 1;

}

RailFence::RailFence(unsigned int rows, unsigned int offset)
{
	_rows = rows > 0 ? rows : 3;
	_initialOffset = offset > 0 ? offset : 3;
}

RailFence::~RailFence()
{
}

void RailFence::play()
{
	cout << "Welcome to Rail Fence Cipher!" << endl
		<< "This program will take input and encrypt it using a Rail Fence technique." << endl
		<< "Enter Text To Encrypt: ";

	string text = "";

	cin.ignore();

	getline(cin, text);

	auto encryptedText = Encrypt(text);

	shared_ptr<vector<string>> encrypted = std::move(encryptedText);

	printVectorOfString(*encrypted);

	auto fileResult = WriteVectorToFile(encrypted, "D:\\RetroGaming\\RailCipher.txt");

}

unique_ptr<vector<string>> RailFence::Encrypt(string value)
{
	auto result = make_unique<vector<string>>(vector<string>(_rows));
	
	auto currentCharIndex = 0;

	// TODO: Build Rail Fence cipher

	auto columnLength = ceil(value.length() / _rows);

	return std::move(result);

}
