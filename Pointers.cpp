#include <iostream>
using namespace std;

// MAKING A FUNCTION TO PRINT THE VALUE INSIDE THE HUMAN VARIABLE 
void numberPrinter(int* numberPointer /*MAKING POINTER TO BE REFERNCED TO HUMAN VARIABLE */)
{
	cout << *numberPointer<< endl; 
}
void voidPrinter(void* Pointer, char type) 
{
	
}

int main()
{	
	
	int number = 2;
	//CALLING FUNCTION "NUMBERPRINTER"
	numberPrinter(&number);

	cout << "============================";

	//make a variable 
	int n = 5;
	// TURN TH"E VARIABLE INTO POINTER AND PRINT ITS LOCATION
	cout <<"\n" << &n << endl;

	// CREATING A POINTER WITH REFERENCE TO OG VARIABLE 
	int* ptr = &n;
	cout << ptr << endl;
	cout << *ptr << endl;

	// OVERWRITE VALUE OF ORIGINAL VARIABLE BY ACCESSING POINTER
	*ptr = 10;
	cout << *ptr << endl;
	cout << "N= "<<  n << endl;
	cout << "\n---------------------------------------";

	// make human variable 
	int a;
	// make a pointer variable and give its location to human variable 
	int* pointer = &a;
	// give pointer variable a value 
	*pointer = 20;
	// display the pointer variable 
	cout << "\n a = " << *pointer;
	cout << "\n---------------------------------------------------";

	return 0;
	system("pause>0");
}