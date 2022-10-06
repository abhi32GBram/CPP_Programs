#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	// CREATING A VECTOR ARRAY 
	vector<int>number;

	// ADDING AN ELEMENT WITH THE .PUSH_BACK()
	number.push_back(0);

	// ADDING 10 ELEMENTS IN THE ARRAY USING STANDARD FOR LOOP 
	for (int i = 1; i <= 10; i++) 
	{
		number.push_back(i);
	}
	// 'EASIER' WAY TO PRINT THE ELEMENTS OF THE DYNAMIC ARRAY
	//     /\
	//	   | 
	//for (int num : number) 
	//{
	//	cout << num << endl;
	//}
	
	// USING FOR LOOP CONSISTING OF AN ITERATOR WITH AN AUTO STORAGE CLASS WHICH WILL TRAVERSE THE DYNAMIC ARRAY 
	// THE 'AUTO' KEYWORD DETECTS THE RETURN TYPE OF THE ITERATION AND AUTOMATICALLY ACCEPTS IT 
	for (auto iter = number.begin(); iter != number.end(); iter++) 
	{
		// CANT DIRECTLY PRINT THE ITERATOR 
		//cout << iter << endl;

		// EITHER PRINT THE VALUE OF THE ITERATOR BY POINTING TOWARDS IT'S VALUE 
		cout << *iter << endl;

		// EITHER PRINT THE ADDRESS OF THE MEMORY LOCATION OF THE ITERATOR 
		cout << &iter << endl;

		// EITHER PRINT THE ADDRESS OF THE MEMORY LOCATION OF THE VALUE 
		cout << &(*iter) << endl;

	}
	cout << "------------------------------------";

	// MAKING AN ITERATOR TO ADD 5 ELEMENTS TO THE FIRST VALUE 
	auto iter = number.begin();
	cout << " \nADDING 5 ELEMENTS TO THE DYNAMIC ARRAY : " << *(iter + 5) << endl;

	// DISPLAY THE SIZE OF THE VECTOR 
	cout << " SIZE : " << number.size() << endl;

	// THE CAPACITY OF THE VECTOR 
	cout << "CAPACITY : " << number.capacity() << endl;

	// THE MAX SIZE OF THE VECTOR DEFINED BY THE DATA YPE 
	cout << "  MAX SIZE : " << number.max_size() << endl;

	// UPDATING THE SIZE OF THE EXISTING VECTOR
	cout << " NEW SIZE : " << number.size() << endl;
	number.resize(5);

	// BEFORE UPDATING THE VRECTOR - CHECKING IF THE VECTOR IS EMPTY OR NOT 
	if (number.empty()) 
	{
		cout << "VECTOR IS EMPTY !! \n";
	}
	else
	{
		cout << "THE VECTOR IS NOT EMPTY \n";
	}

	// ACCESSING THE ELEMENT AT AN INDEX USING THE '[ ]'
	cout << "ELEMENT [0] IS : " << number[0] << endl;
	cout << "ELEMENT [0] IS : " << number.at(0) << endl;

	// DISPLAY THE FIRST ELEMENT OF  THE VECTOR  
	cout << " FIRST ELEMENT : " << number.front() << endl;

	// DISPLAY THE LAST ELEMENT OF THE VECTOR 
	cout << " LAST ELEMENT  : " << number.back() << endl;

	// USED TO CLEAR THE WHOLE VECTOR 
	number.clear();
	cout << " NEW SIZE (AFTER CLEARING) : " << number.size() << endl;

	number.insert(number.begin() + 9, 100);
	for (auto n : number) 
	{
		cout << n << endl;
	}

	return 0;
	system("pause>0");



}