//#include<iostream>
//using namespace std;
//
//
//int getMinNum(int numberArray[], int size) 
//{
//	int minNum = numberArray[0];
//	for (int i = 0; i < size ; i++) 
//	{
//		if (numberArray[i] < minNum) 
//		{
//			minNum = numberArray[i];
//		}
//		return minNum;
//	}
//}
//
//int getMaxNum(int numberArray[], int size)
//{
//	int maxNum = numberArray[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (numberArray[i] > maxNum)
//		{
//			maxNum = numberArray[i];
//		}
//		return maxNum;
//	}
//}
//void getMinMax(int numberArray[], int size, int* minNum, int* maxNum) 
//{
//	for (int i = 1; i < size; i++) 
//	{
//		if (numberArray[i] > *maxNum) 
//		{
//			*maxNum = numberArray[i];
//		}
//
//		if (numberArray[i] < *minNum)
//		{
//			*minNum = numberArray[i];
//		}
//	}
//}
//
//	
//
//int main() 
//{
//	int numberArray[5] = { 2,3,4,5,-29 };
//
//	/*for (int i = 1; i <= 4; i++)
//	{
//			cout << " ENTER NUMBERS : ";
//			cin >> numberArray[i];
//	}
//
//
//	cout << " SMALLEST NUMER IS : " << getMinNum(numberArray,5) << endl;
//	cout << " BIGGEST NUMBER IS : " << getMaxNum(numberArray, 5) << endl;*/
//
//	//// ----------------------------
//
//	int minNum = numberArray[0];
//	int maxNum = numberArray[0];
//
//	getMinMax(numberArray, 5,&minNum,&maxNum)
//	{
//		cout << "BIGGEST NUMBER IS : " << minNum << endl;
//		cout << " SMALLEST NUMBER IS : " << maxNum << endl;
//	}
//
//int numbers[5] = { 5,4,-2,29,6 };
///* cout << "Min is " << getMin(numbers, 5)<< endl;
//cout << "Max is " << getMax(numbers, 5)<< endl;*/
//int min numbers[0];
//int max numbers[0];
//getMinAndMax(numbers, 5, &min, &max);
//cout << "min is " << min << endl;
//cout << "max is " << max << endl;
//	system("pause>0");
//
//}
//-----------------------------------------------------
//
////  TYPICAL INPUT LINE FOR ARRAY (HERE : 4 INPUTS)
//	for (int i = 0; i <= 4; i++) 
//	{
//		cout << " ENTER NUMBERS : ";
//		cin >> numberArray[i];
//	}
//	
//
//						~CONNECTED~ 
//
//// PRINT THE INPUTED VALUES IN ARRAY BY DE-REFERENCING THE THE ARRAY VARIABLE 
//	for (int i = 0; i <= 4; i++) 
//	{
//		cout << *(numberArray + i) << " ";
//	}
//------------------------------------------------------
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//void printNumber(int* numberPtr) 
//{
//	cout << *numberPtr << endl;
//}
//
//void printLetter(char* charPtr) 
//{
//	cout << *charPtr << endl;
//}
//
//void print(void* ptr, char type) 
//{
//
//	switch (type)
//	{
//	case 'i':cout << *((int*)ptr) << endl; break;
//	case 'c':cout << *((char*)ptr) << endl; break;
//	}
//}
//int main()
//{
//		int number = 5;
//		char letter = 'a';
//		/*printNumber(&number);
//		printLetter(&letter);*/
//		print(&number, 'i');
//		print(&letter, 'c');
//	return 0;
//	system("pause>0");
//
//}
//------------------------------------------------------------------
//#include <iostream>
//using namespace std;
//
//// MAKING A FUNCTION TO PRINT THE VALUE INSIDE THE HUMAN VARIABLE 
//void numberPrinter(int* numberPointer /*MAKING POINTER TO BE REFERNCED TO HUMAN VARIABLE */)
//{
//	cout << *numberPointer<< endl; 
//}
//void voidPrinter(void* Pointer, char type) 
//{
//	
//}
//
//int main_pointers()
//{	
//	
//	int number = 2;
//	//CALLING FUNCTION "NUMBERPRINTER"
//	numberPrinter(&number);
//
//	cout << "============================";
//
//	//make a variable 
//	int n = 5;
//	// TURN TH"E VARIABLE INTO POINTER AND PRINT ITS LOCATION
//	cout <<"\n" << &n << endl;
//
//	// CREATING A POINTER WITH REFERENCE TO OG VARIABLE 
//	int* ptr = &n;
//	cout << ptr << endl;
//	cout << *ptr << endl;
//
//	// OVERWRITE VALUE OF ORIGINAL VARIABLE BY ACCESSING POINTER
//	*ptr = 10;
//	cout << *ptr << endl;
//	cout << "N= "<<  n << endl;
//	cout << "\n---------------------------------------";
//
//	// make human variable 
//	int a;
//	// make a pointer variable and give its location to human variable 
//	int* pointer = &a;
//	// give pointer variable a value 
//	*pointer = 20;
//	// display the pointer variable 
//	cout << "\n a = " << *pointer;
//	cout << "\n---------------------------------------------------";
//
//	return 0;
//	system("pause>0");
//}