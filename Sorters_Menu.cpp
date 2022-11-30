//#include <iostream>
//using namespace std; 
//
//// MAKING RECURSIONS OF THE EXISTING FUNCTIONS 
//
//void bubbleSort(int masterArray[100], int size);
//
//void quickSort(int[], int, int);
//int partition(int[], int, int);
//
//void insertionSort(int masterArray[100], int size);
//void selectionSort(int masterArray[100], int size);
//
//void merge(int[], int, int, int);
//void mergeSort(int[], int, int);
//
//// THE BEAUTIFICATION PART AND THE USER INTERFACE FOR THE PROGRAM 
//int main() 
//{
//	int masterArray[100];
//	int size;
//	int sortChoice;
//
//	cout << "\n\n\tENTER THE SIZE OF THE ARRAY : \t";
//	cin >> size;
//
//	cout << " ENTER THE ELEMENTS IN THE ARRAY :";
//	for (int i = 0;  i < size ;  i++)
//	{
//		cout << "enter element - [" << i << "] :";
//		cin >> masterArray[i];
//	}
//
//	do
//	{
//		cout << "\n\n\n\n\t\t~~ WELCOME TO THE SORTERS CATALOGUE ~~\n\n";
//
//		cout << "\n\t\t(1.)BUBBLE SORT\n\n\t\t(2.)INSERTION SORT\n\n\t\t(3.)SELECTION SORT";
//		cout << "\n\n\t\t(4.)QUICK SORT\n\n\t\t(5.)MERGE SORT\n\n\n\t\t(6.)EXIT THE PROGRAM";
//
//		cout << "\n\n\t\tENTER YOUR CHOICE : \t\n\n";
//		cin >> sortChoice;
//
//		switch (sortChoice)
//		{
//		case 1 :
//			cout << "\n\n\n\n\t\t~~~WELCOME TO BUBBLE SORTING~~~\n\n";
//			bubbleSort(masterArray, size);
//			break;
//
//		case 2:
//			cout << "\n\n\n\n\t\t~~~WELCOME TO INSERTION SORTING~~~\n\n";
//			insertionSort(masterArray, size);
//			break;
//
//		case 3:
//			cout << "\n\n\n\n\t\t~~~WELCOME TO SELECTION SORTING~~~\n\n";
//			selectionSort(masterArray, size);
//			break;
//
//		case 4:
//			cout << "\n\n\n\n\t\t~~~WELCOME TO QUICK SORTING~~~\n\n";
//			quickSort(masterArray, 0, size - 1);
//
//			cout << "\nTHE SORTED ARRAY IS :";
//
//			for (int j = 0; int j < size; j++)
//			{
//				cout << "\t" << masterArray[j];
//			}
//			break;
//
//		case 5:
//			cout << "\n\n\n\n\t\t~~~WELCOME TO MERGE SORTING~~~\n\n";
//			mergeSort(masterArray, 0, size - 1);
//			break;
//		}
//	} while (sortChoice<6);
//
//	return;
//}
//
////--------------------------------------------------------------------------------------------------------------
//
//void bubbleSort(int commonArray[100], int size) 
//{
//	int temp;
//	int size1;
//	int k;
//
//	size1 = size - 1;
//
//	cout << "\n\n\n\t\tYOURE ARRAY BEFORE SORTING : \t\n\n\n";
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\t" << commonArray[i];
//	}
//	
//	cout << "\n\n\n\n+-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-+-";
//
//	for (int i = 0; i < size; i++)
//	{
//		for(int j=0;j<size1;j++)
//		{
//			if (commonArray[j]>commonArray[j+1])
//			{
//				temp = commonArray[j];
//				commonArray[j] = commonArray[j + 1];
//				commonArray[j + 1] = temp;
//			}
//		}
//		cout << " \n\nAFTER PASS %d: ", i + 1;
//		for (int k = 0;  k < size;  k++)
//		{
//			cout << "\t" << commonArray[k];
//		}
//		size1--;
//	}
//
//	cout << "\n\n+-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-+-";
//	cout << "\n\n\n YOURE ARRAY AFTER BEING SORTED : \n\n\n";
//	for (i = 0; i < size; i++)
//	{
//		cout << "\t" << commonArray[i];
//	}
//}
//
////--------------------------------------------------------------------------------------------------------------
//
//void insertionSort(int commonArray[100], int size) 
//{
//	int temp;
//	int j, k;
//
//	cout << "\n\n\n\t\t YOURE ARRAY BEFORE SORTING :  \t\n\n\n";
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\t" << commonArray[i];
//	}
//
//	cout << "\n\n\n\n+-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-+-";
//
//	for (int i = 0; i < size; i++)
//	{
//		temp = commonArray[i];
//		j = i;
//		while (j > 0 && commonArray[j - 1] > temp) 
//		{
//			commonArray[j] = commonArray[j - 1];
//			j = j - 1;
//		}
//		commonArray[j] = temp;
//
//		cout << "\n\n AFTER PASS %d: ", i;
//		for (int  k = 0; k < size; k++)
//		{
//			cout << "\t" << commonArray[k];
//		}
//	}
//
//	cout << "\n\n+-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-++-+-+-+-";
//
//	cout << "\n\n\n YOURE ARRAY AFTER SORTNG : \t\n\n\n";
//
//
//}