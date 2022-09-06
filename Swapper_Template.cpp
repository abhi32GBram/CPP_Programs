#include <iostream>
using namespace std;



template<typename T>
void swapper(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


int main_CHANGE_THIS_PLS()
{

	int a, b;

	cout << "\nENTER VAUE A : ";
	cin >> a;
	cout << "\nENTER VALUE B : ";
	cin >> b;

	cout << a << b << endl;
	swapper(a, b);
	cout << a << b << endl;


	char c, d;
	cout << " ENTER VALUE C : ";
	cin >> c;
	cout << " ENTER VALUE D :";
	cin >> d;

	cout << c << d << endl;
	swapper(c, d);
	cout << c << d << endl;


	system("pause>0");
	return 0;
}