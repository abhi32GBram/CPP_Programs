#include <iostream>
using namespace std;

int main() 
{

	int *mypointer;
	int *myDynamicPointer = new int;

	//cout << "mypointer = " << mypointer << endl;
	//cout << "mypointer value = " << *mypointer << endl;

	//cout << "myDynamic Pointer = " << myDynamicPointer << endl;
	//cout << "myDynamic Pointer value = "<< myDynamicPointer << endl;

	*mypointer = 5;
	*myDynamicPointer = 7;

	cout << "myPointer value = " << *mypointer << endl;
	cout << "myDynamic Pointer value = " << *myDynamicPointer << endl;


}