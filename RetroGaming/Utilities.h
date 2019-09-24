#pragma once

#include <random>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int getRandomIndex(long max);

unique_ptr<vector<string>> loadWords(string fileName);

void trim(string value);

string reverseString(string word);

void printVectorOfString(const vector<string> &items);