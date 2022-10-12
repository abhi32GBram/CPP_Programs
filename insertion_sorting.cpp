#include <iostream>
using namespace std;

void insertSort(int arr[], int n) 
{
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;

		while (j > 0 && temp <= arr[j])
		{
			arr[j + 1];
			j = j - 1;
		}
		arr[j + 1];
	}
}


int main() 
{
	int arr[100];
	int size;

	cout << "enter the size of the array : ";
	cin >> size;

	cout << "enter the elements in the array :" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << " element  - [" << i << "] : ";
		cin >> arr[i];
	}

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "\nthe unsorted array is  :";
	for (int j = 0; j < size ; j++) 
	{
		cout << arr[j] << " ";
	}

	insertSort(arr, n);

	cout << "\nthe sorted array is  :";
	for (int k = 0; k < size; k++)
	{
		cout << arr[k] << " ";
	}

	return 0; 
}