#pragma once

#include <random>
#include <string>
#include <fstream>

using namespace std;

int getRandomIndex(long max);

unique_ptr<vector<string>> loadWords(string fileName);