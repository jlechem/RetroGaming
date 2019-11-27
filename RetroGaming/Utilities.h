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

int getRandomIndex(long max);

int getRandomNumber(long max);

int getRandomNumber(long min, long max);

std::unique_ptr<std::vector<std::string>> loadWords(std::string fileName);

void trim(std::string value);

std::string reverseString(std::string word);

std::string loadFileIntoString(std::string fileName);

void printVectorOfString(const std::vector<std::string> &items);

std::string GenerateRandomFileName();

bool WriteTextToFile(std::string text, std::string file, bool truncate = true);

bool WriteTextToFile(std::string text, bool truncate = true);

bool WriteVectorToFile(std::shared_ptr<std::vector<std::string>>, std::string, bool truncate = true);