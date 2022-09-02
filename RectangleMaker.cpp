#include<iostream>
#include<iomanip>

using namespace std;
void main_CHANGE_THIS()
{
	int length, width;

	cout << "==PATTERN MAKER==" << endl;

	cout << "\n \tENTER THE WIDTH : ";
	cin >> length;

	cout << "\n \tENTER THE LENGTH: ";
	cin >> width;

	char symbol;

	cout << "\n \tENTER THE SYMBOL :";
	cin >> symbol;

	for (int l = 0; l < length; l++)
	{
		for (int w = 0; w < width; w++)
		{
			cout << setw(2) << symbol;
		}
		cout << endl;
	}
}