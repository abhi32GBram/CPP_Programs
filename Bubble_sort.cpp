#include <iostream>
using namespace std;

void bubSort(int sortArr[], int size) 
{
	int i, j, temp;
	for (i = 0; i < size; i++) 
	{
		for (j = i+1; j < size; j++) 
		{
			if (sortArr[j] < sortArr[i]) 
			{
				temp = sortArr[i];
				sortArr[i] = sortArr[j];
				sortArr[j] = temp;
			}
		}
	}
}

int main_bubble()
{
	
	int sortArr[100];
	int size;
	int temp;

	cout << "\t\t ~BUBBLE SORT~" << endl;
	cout << "\n\n~ENTER THE SIZE OF THE ARRAY : ";
	cin >> size;

	cout << "\n~ENTER THE ELEMENTS IN THE ARRAY :" << endl;
	for (int i = 0; i < size; i++) 
	{
		cout << " \n\tELEMENT  - [" << i << "] : ";
		cin >> sortArr[i];
	}
	
	//size = sizeof(sortArr) / sizeof(sortArr[0]);
	
	cout << " \n~THE UNSORTED ARRAY IS : ";
	for (int j = 0; j < size; j++) 
	{
		cout << sortArr[j] << "," << " ";
	}
	bubSort(sortArr, size);

	cout << " \n\nTHE SORTED ARRAY IS : ";
	for (int j = 0; j < size; j++)
	{
		cout << sortArr[j] << "," << " ";
	}

	return 0;
	system("pause>0");

}