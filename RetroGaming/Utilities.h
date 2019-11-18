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

#pragma once

#include <random>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int getRandomIndex(long max);

int getRandomNumber(long max);

int getRandomNumber(long min, long max);

unique_ptr<vector<string>> loadWords(string fileName);

void trim(string value);

string reverseString(string word);

string loadFileIntoString(string fileName);

void printVectorOfString(const vector<string> &items);

string createGUID();

string createUniqueFilename(string extension = nullptr);

string GenerateRandomFileName();
