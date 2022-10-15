#include <iostream>
using namespace std;


int facto(int n) 
{
	if (n > 1) 
	{
		return n * facto(n - 1);
	}
	else
	{
		return 1;
	}
}

int facto(int);

int main_eh() 
{
	int n, factorial;

	cout << " ENTER A NON NEGATIVE NUMBER : ";
	cin >> n;

	factorial = facto(n);

	cout << " FACTORIAL OF " << n << " IS " << factorial;
	return 0;
}