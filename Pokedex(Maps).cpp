#include<iostream>
#include<map>
#include<string>
#include<list>

using namespace std;

int main_pokemon()
{
	// MAIKG A MAP OR DICTIONARY FOR A POKEDEX WITH --> STRING(KEY) AND LIST OF STRINGS(VALUE)
	map<string, list<string>> pokedex;

	// MAKING A LIST ATTACKS FOR SOME POKEMONS 
	list<string> pikachuAttacks{ "QUICK ATTACK","Tail WHIP","THUNDERSHOCK" };
	list<string> charmanderAttacks{ "FLAME FLINGER","SCARY FACE","THEAT BLAST " };
	list<string> chikuritaAttacks{ "RAZOR LEAF","TENTICLE ATTACK","POISON CLOUD " };

	// COOMINING THE KEY AND VALUE TO THE MAP 
	pokedex.insert(pair<string, list<string>>("PIKACHU", pikachuAttacks));
	pokedex.insert(pair<string, list<string>>("CHARMANDER", charmanderAttacks));
	pokedex.insert(pair<string, list<string>>("CHIKURITA", chikuritaAttacks));

	// DISPLAY THE POKEMON NAMNE(KEY)
	for (auto pair : pokedex)
	{
		cout << pair.first << " - ";

		// DISLPLAY THE POKEMON ATTACK(VALUE)
		for (auto attack : pair.second) 
		{
			cout << attack << ",";
		}
		cout << endl;
	}
	return 0;
	system("pause>0");
}