#include <iostream>
#include <vector>

using namespace std;

int main_quan() 
{
	int vectSize;
	vector<int>sortVect;
	int myInt;

	cout << "\t\t~BUBBLE SORT ALGORITH~";

	cout << "\n\nENTER THE SIZE OF THE ARRAY : ";
	cin >> vectSize;

	cout << "\nENTER THE ELEMENTS IN THE VECTOR : ";
	for (int i = 1; i <= vectSize; i++) 
	{
		cout << "\n\tELEMENT - [" << i << "] : ";
		cin >> myInt; 
		sortVect.push_back(myInt);
	}

	cout << "\n THE UNSORTED VECTOR IS : ";
	for (int i = 1; i <= vectSize; i++)
	{
		//cout << sortVect << " ";
	}


	return 0;
}