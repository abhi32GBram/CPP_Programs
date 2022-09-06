#include <iostream>
using namespace std;


int recursive_sum(int p, int q)
{
	if (p == q)

	{
		return p;
	}
	return p + recursive_sum(p + 1, q);
}
int main_recur()
{
	int p, q, sum = 0;
	cout << "\t\t==================";
	cout << "\n\t\tRANGE-SUM FINDER";
	cout << "\n\t\t====================";

	cout << "\nENTER FIRST NUMBER : ";
	cin >> p;

	cout << "\nENTER THE LAST NUMBER : ";
	cin >> q;


	cout << "\nTHE SUM IS : " << recursive_sum(p, q);
	system("pause>0");
	return 0;
}


// ORIGINAL LOGIC 
//for (int i = p; i <= q; i++)
//{
//	sum += i;
//}
