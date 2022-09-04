#include <iostream>
using namespace std;

void ATM_Menu()
{
	cout << "\ \t\t=========================";
	cout << "\n \t\t~~WELCOME TO THE BANK~";
	cout << "\n \t\t======================== ";


	cout << " \n I.) CHECK BALANCE ";
	cout << " \n II.) DEPOSIT";
	cout << " \n III.) WITHDRAW ";
	cout << " \n IV.) EXIT ";
	cout << "\n**********************";
}

int main_CHANGE_THIS()
{

	int option;
	double balance = 1000;
	do
	{
		ATM_Menu();

		cout << "\n \nSELECT FUNNCTIONALITY :  ";
		cin >> option;

		system("cls");

		switch (option)
		{
		case 1:cout << "BALANCE IS : " << "$ " << balance << endl; break;

		case 2:cout << "\nDEPOSIT AMOUNT :";
			double depositAmount;

			cin >> depositAmount;
			balance += depositAmount;
			break;

		case 3:cout << "WITHDRAW AMOUNT :";
			double withdrawAmount;
			cin >> withdrawAmount;

			if (withdrawAmount <= balance)
			{
				balance = withdrawAmount;
			}
			else
			{
				cout << "INSUFFICIENT AMOUNT !! " << endl;
			}
			break;
		}
	} while (option != 4);
	system("pause>0");
	return 0;
}