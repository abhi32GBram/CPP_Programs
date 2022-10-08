#include <iostream>
using namespace std;


class Sorter
{
public:
	int myArr[100];
	int arrSize;
	int low, high;
	int tempa;

	void smallest();
	void largest();
};

void Sorter::smallest()
{
	cout << " ~ FINDING THE SMALLER VALUES IN THE ARRAY AFTER THE USER GIVEN VALUES ~";
	cout << "\n----------------------------------------------------------------------------";

	cout << "\nENTER SIZE OF THE ARRAY : ";
	cin >> arrSize;

	for (int x = 0; x < arrSize ; x++)
	{
		cout << "ENTER ELEMENT " << x << ": " << flush;
		cin >> myArr[x];
	}

	
	cout << "~~~\n";

	for (int i = 0; i < arrSize - 1; i++) 
	{
		for (int j = 0; j < (arrSize - i - 1); j++) 
		{
			if (myArr[j] > myArr[j + 1]) 
			{
				tempa = myArr[j];
				myArr[j] = myArr[j + 1];
				myArr[j + 1] = tempa;

			}
		}
	}

	cout << "\n\n";

	cout << "ENTER THE VALUE TO SEARCH THE LOWERMOST NUMBERS : " << flush;
	cin >> low;

	cout << "********";

	cout << "\n\n";

	cout << " THE SMALLEST" << low << "ELEMENTS IN THE ARRAY ARE : " << flush;
	for (int p = 0; p < low; p++)
	{
		cout << myArr[p] << "," << flush;
	}

	cout << "\n---------------------------------------------------------";
}

void Sorter::largest()
{
	cout << "\n~FINDING THE LARGER VALUES IN THE ARRAY AFTER THE USER GIVEN VALUES ~";
	cout << "\nENTER THE SIZE OF ARRAY : " << flush;
	cin >> arrSize;

	for (int x = 0; x < arrSize; x++)
	{
		cout << "ENTER ELEMENT " << x << ": " << flush;
		cin >> myArr[x];
	}

	for (int i = 0; i < arrSize - 1; i++)
	{
		for (int j = 0; j < (arrSize - i - 1); j++)
		{
			if (myArr[j] < myArr[j + 1])
			{
				tempa = myArr[j];
				myArr[j] = myArr[j + 1];
				myArr[j + 1] = tempa;
			}
		}
	}
	cout << "ENTER THE VALUE TO SEARCH THE LARGEST NUMBERS" << flush;
	cin >> high;

	cout << "*******" << endl;

	cout << "THE LARGEST " << high << " ELEMENTS IN THE ARRAY ARE : ";
	for (int t = 0; t < high; t++)
	{
		cout << myArr[t] << "," << flush;
	}
}
int main()
{
	Sorter sort;
	sort.smallest();
	sort.largest();

	system("pause>0");
	return 0;
}
