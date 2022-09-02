#include <iostream>
using namespace std;

void ATM_Menu()
{
	cout << "========================================";
	cout << "\n \t\t~~WELCOME TO THE BANK~";
	cout << "\n \t\t =================================";
	

	cout << " \n I.) WITHDRAW ";
	cout << " \n II.) DEPOSIT";
	cout << " \n III.) CHECK ACCOUNT BALANCE";
	cout << " \n IV.) SHOW TRANSACTION HISTORY ";		
}

void main()
{
	int choice;
	int current_balance=10000;

	ATM_Menu();

	cout << "PLEASE SELCT THE DESIRED FUINCTIONALITY :";
	cin >> choice;
	do
	{
	switch (check)
	{
	case 1:cout << "THE ACCOUNT BALANCE IS :" << current_balance << "$"; break;

	case 2: cout << " DEPOSITE AMOUNT :";
		double deposited_amount;
		cin >> deposited_amount;
		current_balance += deposited_amount;
		break;

	case 3: cout << " HOW MUCH DO YOU WANT TO WITHDRAW ? : ";
		double withdrawn_amount;
		cin >> withdrawn_amount;
		if (withdrawn_amount <= current_balance)
		{
			current_balance -= withdrawn_amount;
		}
		else
		{
			cout << "INSUFFIENCIENT CAPITOL ! ";
		}
		break;
	
	}

	
	system("pause>0");
}