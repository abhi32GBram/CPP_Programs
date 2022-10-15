//#include <iostream>
//using namespace std;
//
//void insertArray(int insArr [], int insSize) /* function to sort an aay with insertion sort */
//{
//    int i, j;
//    int temp;
//
//    for (i = 1; i < insSize; i++) 
//    {
//        temp = insertArray[i];
//        j = i - 1;
//
//        while (j >= 0 && temp <= insertArray[j])  
//        {
//            insertArray[j + 1] = insertArray[j];
//            j = j - 1;
//        }
//        insertArray[j + 1] = temp;
//    }
//}
//
//void printArr(int insertArray[], int insSize) /* function to print the array */
//{
//    int i;
//    for (i = 0; i < insSize; i++)
//        cout << insertArray[i] << " ";
//}
//
//int main()
//{
//    int insArray[100];
//    int insSize;
//
//    cout << "\t\t~~ INSERTION SORTER PROGRAM ~~";
//    cout << "INSERT THE SIZE OF THE ARRAY : ";
//    cin >> insSize;
//
//    cout << "ARRAY BEFORE SORTING THE ELEMENTS IS -  " << endl;
//    printArr(insertArray, insSize);
//
//    insertArray(insertArray, insSize);
//    cout << "\nAfter sorting array elements are - " << endl;
//    printArr(insertArray, insSize);
//
//    return 0;
//}