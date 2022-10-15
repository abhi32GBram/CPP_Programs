#include <iostream>
#include <vector>
using namespace std;

int main_vectors() 
{
	// creating a vector array 
	vector<int>number;

	// adding an element with the .push_back()
	number.push_back(0);

	// adding 10 elements in the array using standard for loop 
	for (int i = 1; i <= 10; i++) 
	{
		number.push_back(i);
	}
	// 'easier' way to print the elements of the dynamic array
	//     /\
	//	   | 
	//for (int num : number) 
	//{
	//	cout << num << endl;
	//}
	
	// using for loop consisting of an iterator with an auto storage class which will traverse the dynamic array 
	// the 'auto' keyword detects the return type of the iteration and automatically accepts it 
	for (auto iter = number.begin(); iter != number.end(); iter++) 
	{
		// cant directly print the iterator 
		//cout << iter << endl;

		// either print the value of the iterator by pointing towards it's value 
		cout << "the value of the position : " << *iter << endl;

		// either print the address of the memory location of the iterator 
		cout << "the address of the iterator : " << &iter << endl;

		// either print the address of the memory location of the value 
		cout << "the adddress of the memory location of the value  :\n\n" << &(*iter) << endl;

	}
	cout << "------------------------------------";

	// making an iterator to add 5 elements to the first value 
	auto iter = number.begin();
	cout << " \nadding 5 elements to the dynamic array : " << *(iter + 5) << endl;

	// display the size of the vector 
	cout << "\nsize : " << number.size() << endl;

	// the capacity of the vector 
	cout << "\ncapacity : " << number.capacity() << endl;

	// the max size of the vector defined by the data ype 
	cout << "\nmax size : " << number.max_size() << endl;

	// updating the size of the existing vector
	cout << "\nnew size : " << number.size() << endl;
	number.resize(5);

	// before updating the vrector - checking if the vector is empty or not 
	if (number.empty()) 
	{
		cout << "\nvector is empty !! \n";
	}
	else
	{
		cout << "the vector is not empty \n";
	}

	// accessing the element at an index using the '[ ]'
	cout << "\nelement [0] is : " << number[0] << endl;
	cout << "\nelement [0] is : " << number.at(0) << endl;

	// display the first element of  the vector  
	cout << "\nfirst element : " << number.front() << endl;

	// display the last element of the vector 
	cout << "\nlast element  : " << number.back() << endl;

	// used to add an element at a particular index by adding the index cale with the .begin() to give the adress 
	number.insert(number.begin() + 2, 100);
	for (auto n : number)
	{
		cout << "\n" << n << endl;
	}
	// used to remove or erase an elelment from the vector 
	number.erase(number.begin() + 1);

	// used to remove the last element of the vector
	number.pop_back();

	// used to clear the whole vector 
	number.clear();
	cout << "\nnew size (after clearing) : " << number.size() << endl;


	return 0;
	system("pause>0");

}
// vectors are better if the user wants to change the size and elements of the array frequently 
// vaectors hide the memory managment and provides lot of functionalities to the user to work with a collection 

//static array are better if the user wants a fixed size and wants to traverse the array quickly 

// dynamic arrays makes the user to mamange their own memory to get a slight performance boost but makes puts them at risk to produce bugs  