#include <iostream>
using namespace std;
int PIN()
{
	int usersPin = 6994, pin, errorCounter = 0;
	do
	{
		cout << " ENTER THE PIN : ";
		cin >> pin;

		if (pin != usersPin)
		{
			errorCounter++;
		}

	} while (errorCounter < 3 && pin != usersPin);
	if (errorCounter < 3)
	{
		cout << "LOADING YOUR ACCOUNT DETAILS ...";
	}
	else
	{
		cout << "ACCESS REVOKED !!  ";
	}
	system("pause>0");
	return 0;

}