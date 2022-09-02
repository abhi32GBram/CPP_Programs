#include <iostream>
using namespace std;
int MonthDayFinder()
{
	cout << "\t ===NO OF DAYS RETIRIVER===";
	int year, month;
	cout << "\n ENTER THE MONTH : ";
	cin >> month;

	cout << "\n ENTER THE YEAR : ";
	cin >> year;

	switch (month)
	{
	case 2:(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
		cout << "\nMONTH HAS 29 DAYS(LEAP YEAR)" : cout << "\nMONTH HAS 28 DAYS(NON-LEAP YEAR)."; break;
	case 4:
	case 6:
	case 9:
	case 11:	cout << "\n MONTH HAS 30 DAYS"; break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << "\nMONTH HAS 31 DAYS"; break;
	default: cout << "\nINVALID MONTH";

	}
	system("pause>0");
	return 0;
}