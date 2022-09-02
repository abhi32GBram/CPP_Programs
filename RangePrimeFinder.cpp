#include <iostream>
using namespace std;


bool Check_Prime(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}
void main_CHANGE_THS()
{
	int num;

	cout << " \n\t~RANGE PRIME NUMBER SHOWCASE~ ";

	cout << "\nENTER THE NUMBERS TILL PRIME PROPERTY TO BE CHECKED : ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		bool isPrime = Check_Prime(i);
		if (isPrime)
		{
			cout << i << " IS A PRIME NUMBER \n";
		}
	}

	system("pause>0");
}


/*int number;
cout << "ENTER THE NUMBER : ";
cin >> number;

bool isPrimeFlag = Check_Prime(number);
if (isPrimeFlag)
	cout << "Prime number" << endl;
else
	cout << "Not prime number" << endl;
	system("pause>0");	*/

	//
	//bool Check_Prime(int number)
	//{
	   // bool isPrimeFlag = true;
	   // B for (int i = 2; i < number; i++)
	   // {
	   //	 if (number % i == 0)
	   //	 {
	   //		 isPrimeFlag = false;
	   //		 break;
	   //	 }
	   //	 return isPrimeFlag;

	   // }
	//}