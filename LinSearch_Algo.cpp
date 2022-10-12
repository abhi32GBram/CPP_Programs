#include <iostream>
using namespace std;

// Driver Code 
void Lin_search()
{
	int size, key;
	int myArr[100];
	int posi;

	bool flag = 0;

	cout << "ENTER THE SIZE OFTHE ARRAY : ";
	cin >> size;
	cout << "ENTER THE ELEMENTS IN THE ARRAY :";
	for (int i = 0; i < size; i++)
	{
		cin >> myArr[i];
	}


	cout << "\n\nENTER THE ELEMENT TO BE SEARCHED ";
	cin >> key;


	cout << "YOU'RE ARRAY IS : " << endl;
	for (int j = 0; j < size; j++)
	{
		cout << myArr[j] << " ";
	}


	for (int a = 0; a < size; a++)
	{
		if (key == myArr[a])
		{
			posi = a;
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout << "\n\n" << key << " IS PRESENT IN THE ARRAY !! ";
	}
	else
	{
		cout << "\n\n" << key << " NOT FOUND IN THE ARRAY.";
	}
}

int main_linSearch()
{
	Lin_search();
	return 0;
}
//---------------------------------------------------------------------------
// IDENTICAL PROGRAM BUT MINIMAL AND DISPLAYS THE INDEX OF THE 'KEY' ELEMENT
//
//int main() 
//{
//	int Arr2[100];
//	int size;
//	int key;
//	
//
//    cout << "ENTER NUMBER OF ELEMENTS IN ARRAY\n";
//    cin >> size;
//
//    cout << "ENTER " << size << " NUMBERS \n";
//
//    
//    for (i = 0; i < size; i++) {
//        cin >> Arr2[i];
//    }
//
//    cout << "Enter a number to serach in Array\n";
//    cin >> key;
//
//    for (i = 0; i < size; i++) {
//        if (Arr2[i] == key) {
//            cout << "Element found at index " << i;
//            break;
//        }
//    }
//
//    if (i == size) {
//        cout << "Element Not Present in Input Array\n";
//    }
//
//    return 0;
//}