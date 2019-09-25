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

#include "NullCipher.h"

NullCipher::NullCipher()
{
	_name = "Null Cipher";
	_description = "Try to decrypt a null cipher encoded file";
}

NullCipher::~NullCipher()
{
}

void NullCipher::Play()
{
	cout << "Welcome to Null Cipher" << endl << endl
		<< "Enter file to decrypt: ";

	string file;

	cin >> file;

	auto fileText = loadFileIntoString(file);

	if (fileText != "")
	{
		while (true)
		{
			auto offset = 0;
			
			cout << endl << "(Original Text): " << fileText << endl
				<< "Enter Offset (0 to quit): ";

			cin >> offset;

			if (cin.fail())
			{
				cin.ignore();
				cin.clear();
			}
			else if( offset == 0 )
			{
				break;
			}
			else
			{

			}
		}
	}
	else
	{
		cout << "File: '" << file << "' not found." << endl << endl;
	}
}