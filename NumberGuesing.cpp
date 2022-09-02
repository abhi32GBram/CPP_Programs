#include <iostream>
using namespace std;

int NumberGuesser()
{
	cout << "===NUMBER GUESSING===";
	int hostNUm, guestNUm;

	cout << "HOST NUMBER ";
	cin >> hostNUm;

	system("cls");

	cout << "GUEST's NUMBER : ";
	cin >> guestNUm;

	(hostNUm == guestNUm)? cout << "YOUR GUESS WAS CORRECT ": cout << "YOUR GUESS WAS INCORRECT : ";

	return 0;
	
	system("pause>0");
}