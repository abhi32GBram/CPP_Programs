#include<iostream>
#include <map>
#include <string>

// FOR #INCUDLE <MAP> --> ITEMS ARE DISPLAYED AUTOMATICALLY IN ALPHABETICAL ORDER 
// TO DISPLAY THE ITEMS IN ANY DESIRED ORDER --- > #INCLUDE <UNORDERED_MAP>
using namespace std;

int main_map() 
{
	// TO DISPLAY AN UNORDERED MAP : REPLACE MAP --> UNORDERED_MAP<...>

	 // MAKING A KEY VALUE PAIR BY GIVIN THE DATA TPYE IN <...>
	// FORMAT: MAP < DATA_TYPE_KEY, DATA_TYPE_VALUE> "MAP NAME";
	map<string, string> EngToMarDcitionary;

	EngToMarDcitionary.insert(pair<string, string>("Apple", "Safarchand"));
	EngToMarDcitionary.insert(pair<string, string>("Banana", "Keli"));
	EngToMarDcitionary.insert(pair<string, string>("Orange", "Santra"));
	EngToMarDcitionary.insert(pair<string, string>("Grapes", "Draksha"));


	
	// FOR EVERY PAIR IN MY DICtionary :
		// PRINT MY FIRST-PAIR AND THE SECOND-PAIR
	for (auto pair : EngToMarDcitionary) 
	{
		cout << pair.first << "-" << pair.second << endl;
	}

	// DIPLSAY THE SIZE OF THE DICTIONARY 
	cout << "SIZE OF THE DICTIONARY IS  :" << EngToMarDcitionary.size() <<"  ELEMENTS. " <<  endl;

	// TO DELETE ANY ELEMENT OF THE DICTIONARY 
	// EngToMarDcitionary.erase("Apple");

	// TO ACCESS A KEY VALUE AND UPDATE IT AFTER THE '==' 
	//EngToMarDcitionary["Apple"] == "Seib or Safarchand";

	return 0;
	system("pause>0");

}