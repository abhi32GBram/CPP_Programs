#include <iostream>
using namespace std;


void bubleSort(int[], int);
void binSearch(int[], int, int);

int main_binBub() 
{
	int myArr[100];
	int arrSize;
	int key;

	cout << "\t\t~ SORT AND SEARCH YOURE DESIRED VALUE ~";

	cout << "\n\n\tENTER THE SIZE OF THE ARRAY : ";
	cin >> arrSize;

	cout << "\n\tENTER THE ELEMENTS IN THE ARRAY : ";
	for (int i = 0; i < arrSize; i++) 
	{
		cout << "\n\n\tELEMENT [" << i << "]";
		cin >> myArr[i];
	}

	cout << "\t\nENTER THE ELEMENT TO BE SEARCHED : ";
	cin >> key;

	bubleSort(myArr, arrSize);

	cout << "\n\tYOURE UNSORTED ARRAY IS : ";
	for (int t = 0; t < arrSize;t++)
	{
		cout << myArr[t] << " ";
	}
	binSearch(myArr, key, arrSize);

	return 0;
	system("pause>0");
}



void bubleSort(int myArr[], int arrSize)
{
	int temp;

	for (int I = 1; I < arrSize; I++)
	{
		for (int J = 0; J < (arrSize - I); J++)
		{
			if (myArr[J] > myArr[J + 1])
			{
				temp = myArr[J];
				myArr[J] = myArr[J + 1];
				myArr[J + 1] = temp;
			}
		}
	}
}
void binSearch(int arr[], int key, int size) 
{
		int mid;
		int k;
		int first, last;

		//where,
		first = 0;
		last = size - 1;
		mid = (first + last) / 2;
		
		for ( k = 0; k < size; k++)
		{
			if (key > arr[mid]) 
			{
				first = mid + 1;
			}
			if (key < arr[mid]) 
			{
				last = mid - 1;
			}
			if (key == arr[mid])
			{
				break;
			}
			mid = (first + last) / 2;
		}
		if (k <= size) 
		{
			cout << "\n\n THE ELEMENT IS  PRESENT AT : " << mid + 1;
		}
		else
		{
			cout << "THE ELEMENT WASNT FOUND";
		}

}

