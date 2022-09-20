#include<iostream>
using namespace std;

int main_multi()
{
	int rows, coloums;
	cout << " ENTER NUMBER OF ROWS AND COLOUMS : ";
	cin >> rows, coloums;

	int** table = new int*[rows];
	for (int i = 0; i < rows; i++) 
	{
		table[i] = new int[coloums];
	}
	table[1][2] = 88;
	
	for (int i = 0; i < rows; i++)
	{
		delete[]  table[i];
	}
	delete[] table;
	table = NULL; 
	return 0;
}
