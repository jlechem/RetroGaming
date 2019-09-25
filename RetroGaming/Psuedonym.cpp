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

#include "Psuedonym.h"

Psuedonym::Psuedonym()
{
	_name = "Psuedonym generator";
	_description = "Random name psuedonym generator";
}

Psuedonym::~Psuedonym()
{
}

void Psuedonym::Play()
{
	loadFirstNames();
	loadSecondNames();

	cout << "Welcome to the Psych 'Sidekick Name Picker.'" << endl;
	cout << "A name just like Sean would pick for Gus:" << endl << endl;

	while (true)
	{
		cout << endl << endl;

		auto firstRandomIndex = getRandomIndex(_firstNames.size() - 1);
		auto secondRandomIndex = getRandomIndex(_lastNames.size() - 1);

		cout << _firstNames[firstRandomIndex] << " " << _lastNames[secondRandomIndex] << endl << endl;
		cout << endl << endl << "Try Again? (Press enter else n to quite)" << endl;

		string tryAgain = "";

		getline(cin, tryAgain);
		
		if (tryAgain == "N" || tryAgain == "n")
		{
			break;
		}
	}
}

void Psuedonym::loadFirstNames()
{
	_firstNames.push_back("Baby Oil");
	_firstNames.push_back("Bad News");
	_firstNames.push_back("Bill 'Beenie-Weenie'");
	_firstNames.push_back("Bob 'Stinkbug'");
	_firstNames.push_back("Bowel Noises");
	_firstNames.push_back("Bud 'Lite' ");
	_firstNames.push_back("Butterbean");
	_firstNames.push_back("Buttermilk");
	_firstNames.push_back("Buttocks");
	_firstNames.push_back("Chad");
	_firstNames.push_back("Chesterfield");
	_firstNames.push_back("Chewy");
	_firstNames.push_back("Chigger");
	_firstNames.push_back("Cinnabuns");
	_firstNames.push_back("Cleet");
	_firstNames.push_back("Cornbread");
	_firstNames.push_back("Crab Meat");
	_firstNames.push_back("Crapps");
	_firstNames.push_back("Dark Skies");
	_firstNames.push_back("Dennis Clawhammer");
	_firstNames.push_back("Diceman");
	_firstNames.push_back("Elphonso");
	_firstNames.push_back("Fancypants");
	_firstNames.push_back("Figgs");
	_firstNames.push_back("Foncy");
	_firstNames.push_back("Gootsy");
	_firstNames.push_back("Greasy Jim");
	_firstNames.push_back("Huckleberry");
	_firstNames.push_back("Huggy");
	_firstNames.push_back("Ignatious");
	_firstNames.push_back("Jimbo");
	_firstNames.push_back("Joe 'Pottin Soil'");
	_firstNames.push_back("Johnny");
	_firstNames.push_back("Lemongrass");
	_firstNames.push_back("Lil Debil");
	_firstNames.push_back("Longbranch");
	_firstNames.push_back("'Lunch Money'");
	_firstNames.push_back("Mr Peabody");
	_firstNames.push_back("Oil-Can");
	_firstNames.push_back("Oinks Jim");
	_firstNames.push_back("Old Scratch");
	_firstNames.push_back("Ovaltine");
	_firstNames.push_back("Pennywhistle");
	_firstNames.push_back("Pitchfork Ben");
	_firstNames.push_back("Potato Bug");
	_firstNames.push_back("Pushmeet");
	_firstNames.push_back("Rock Candy");
	_firstNames.push_back("Schlomo");
	_firstNames.push_back("Scratchensniff");
	_firstNames.push_back("Scut");
	_firstNames.push_back("Sid 'The Squirts'");
	_firstNames.push_back("Skidmark");
	_firstNames.push_back("Slaps");
	_firstNames.push_back("Snakes");
	_firstNames.push_back("Snoobs");
	_firstNames.push_back("Snorki");
	_firstNames.push_back("Soupcan Sam");
	_firstNames.push_back("Spitzitout");
	_firstNames.push_back("Squids");
	_firstNames.push_back("Stinky");
	_firstNames.push_back("Sweet Tea");
	_firstNames.push_back("TeeTee");
	_firstNames.push_back("Wheezy Joe");
	_firstNames.push_back("Winston 'Jazz Hands'");
	_firstNames.push_back("Worms");
}

void Psuedonym::loadSecondNames()
{
	_lastNames.push_back("Appleyard");
	_lastNames.push_back("Bigmeat");
	_lastNames.push_back("Bloominshine");
	_lastNames.push_back("Boogerbottom");
	_lastNames.push_back("Breedslovetrout");
	_lastNames.push_back("Butterbaugh");
	_lastNames.push_back("Clovenhoof");
	_lastNames.push_back("Clutterbuck");
	_lastNames.push_back("Cocktoasten");
	_lastNames.push_back("Endicott");
	_lastNames.push_back("Fewhairs");
	_lastNames.push_back("Chewy");
	_lastNames.push_back("Chigger");
	_lastNames.push_back("Cinnabuns");
	_lastNames.push_back("Cleet");
	_lastNames.push_back("Gooberdapple");
	_lastNames.push_back("Goodensmith");
	_lastNames.push_back("Goodpasture");
	_lastNames.push_back("Guster");
	_lastNames.push_back("Henderson");
	_lastNames.push_back("Hooperbag");
	_lastNames.push_back("Hoosenater");
	_lastNames.push_back("Hootkins");
	_lastNames.push_back("Jefferson");
	_lastNames.push_back("Jenkins");
	_lastNames.push_back("Jingley-Schmidt");
	_lastNames.push_back("Johnson");
	_lastNames.push_back("Kingfish");
	_lastNames.push_back("Listenbee");
	_lastNames.push_back("M'Bembo");
	_lastNames.push_back("McFadden");
	_lastNames.push_back("Moonshine");
	_lastNames.push_back("Nettles");
	_lastNames.push_back("Noseworthy");
	_lastNames.push_back("Olivetti");
	_lastNames.push_back("Outerbridge");
	_lastNames.push_back("Overpeck");
	_lastNames.push_back("Overturf");
	_lastNames.push_back("Oxhandler");
	_lastNames.push_back("Pennywhistle");
	_lastNames.push_back("Peterson");
	_lastNames.push_back("Pieplow");
	_lastNames.push_back("Pennywhistle");
	_lastNames.push_back("Porkins");
	_lastNames.push_back("Potato Bug");
	_lastNames.push_back("Rosenthal");
	_lastNames.push_back("Rubbins");
	_lastNames.push_back("Rosenthal");
	_lastNames.push_back("Rainwater");
	_lastNames.push_back("Quakenbush");
	_lastNames.push_back("Snuggleshine");
	_lastNames.push_back("Splern");
	_lastNames.push_back("Stroganoff");
	_lastNames.push_back("Sugar-Gold");
	_lastNames.push_back("Swackhamer");
	_lastNames.push_back("Tippins");
	_lastNames.push_back("Turnipseed");
	_lastNames.push_back("Vinaigrette");
	_lastNames.push_back("Walkingstick");
	_lastNames.push_back("Wallbanger");
	_lastNames.push_back("Weewax");
	_lastNames.push_back("Weiners");
	_lastNames.push_back("Whipkey");
	_lastNames.push_back("Wigglesworth");
	_lastNames.push_back("Wimplesnatch");
	_lastNames.push_back("Winterkorn");
	_lastNames.push_back("Woolysocks");
}