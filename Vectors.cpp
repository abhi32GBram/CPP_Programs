#include <iostream>
#include <vector>
using namespace std;

int main_vectors() 
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
		cout << "THE VALUE OF THE POSITION : " << *iter << endl;

		// EITHER PRINT THE ADDRESS OF THE MEMORY LOCATION OF THE ITERATOR 
		cout << "THE ADDRESS OF THE ITERATOR : " << &iter << endl;

		// EITHER PRINT THE ADDRESS OF THE MEMORY LOCATION OF THE VALUE 
		cout << "THE ADDDRESS OF THE MEMORY LOCATION OF THE VALUE  :\n\n" << &(*iter) << endl;

	}
	cout << "------------------------------------";

	// MAKING AN ITERATOR TO ADD 5 ELEMENTS TO THE FIRST VALUE 
	auto iter = number.begin();
	cout << " \nADDING 5 ELEMENTS TO THE DYNAMIC ARRAY : " << *(iter + 5) << endl;

	// DISPLAY THE SIZE OF THE VECTOR 
	cout << "\nSIZE : " << number.size() << endl;

	// THE CAPACITY OF THE VECTOR 
	cout << "\nCAPACITY : " << number.capacity() << endl;

	// THE MAX SIZE OF THE VECTOR DEFINED BY THE DATA YPE 
	cout << "\nMAX SIZE : " << number.max_size() << endl;

	// UPDATING THE SIZE OF THE EXISTING VECTOR
	cout << "\nNEW SIZE : " << number.size() << endl;
	number.resize(5);

	// BEFORE UPDATING THE VRECTOR - CHECKING IF THE VECTOR IS EMPTY OR NOT 
	if (number.empty()) 
	{
		cout << "\nVECTOR IS EMPTY !! \n";
	}
	else
	{
		cout << "THE VECTOR IS NOT EMPTY \n";
	}

	// ACCESSING THE ELEMENT AT AN INDEX USING THE '[ ]'
	cout << "\nELEMENT [0] IS : " << number[0] << endl;
	cout << "\nELEMENT [0] IS : " << number.at(0) << endl;

	// DISPLAY THE FIRST ELEMENT OF  THE VECTOR  
	cout << "\nFIRST ELEMENT : " << number.front() << endl;

	// DISPLAY THE LAST ELEMENT OF THE VECTOR 
	cout << "\nLAST ELEMENT  : " << number.back() << endl;

	// USED TO ADD AN ELEMENT AT A PARTICULAR INDEX BY ADDING THE INDEX CALE WITH THE .BEGIN() TO GIVE THE ADRESS 
	number.insert(number.begin() + 2, 100);
	for (auto n : number)
	{
		cout << "\n" << n << endl;
	}
	// USED TO REMOVE OR ERASE AN ELELMENT FROM THE VECTOR 
	number.erase(number.begin() + 1);

	// USED TO REMOVE THE LAST ELEMENT OF THE VECTOR
	number.pop_back();

	// USED TO CLEAR THE WHOLE VECTOR 
	number.clear();
	cout << "\nNEW SIZE (AFTER CLEARING) : " << number.size() << endl;


	return 0;
	system("pause>0");

}
// VECTORS ARE BETTER IF THE USER WANTS TO CHANGE THE SIZE AND ELEMENTS OF THE ARRAY FREQUENTLY 
// VAECTORS HIDE THE MEMORY MANAGMENT AND PROVIDES LOT OF FUNCTIONALITIES TO THE USER TO WORK WITH A COLLECTION 

//STATIC ARRAY ARE BETTER IF THE USER WANTS A FIXED SIZE AND WANTS TO TRAVERSE THE ARRAY QUICKLY 

// DYNAMIC ARRAYS MAKES THE USER TO MAMANGE THEIR OWN MEMORY TO GET A SLIGHT PERFORMANCE BOOST BUT MAKES PUTS THEM AT RISK TO PRODUCE BUGS  