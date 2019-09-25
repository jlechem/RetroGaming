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