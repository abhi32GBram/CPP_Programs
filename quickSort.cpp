//#include <iostream>
//using namespace std;
//
//
//
//int partition(int quickArr[], int start, int end)
//{
//    int pivot = quickArr[end]; // pivot element  
//    int i = (start - 1);
//
//    for (int j = start; j <= end - 1; j++)
//    {
//        // IF CURRENT ELEMENT IS SMALLER THAN THE PIVOT  
//        if (quickArr[j] < pivot)
//        {
//            i++; // INCREMENT INDEX OF SMALLER ELEMENT  
//            int t = quickArr[i];
//            quickArr[i] = quickArr[j];
//            quickArr[j] = t;
//        }
//    }
//    int t = quickArr[i + 1];
//    quickArr[i + 1] = quickArr[end];
//    quickArr[end] = t;
//    return (i + 1);
//}
//
//// FUNCTION TO IMPLEMENT QUICK SORT 
//
//// QUICKARR[] = ARRAY TO BE SORTED, START = STARTING INDEX, END = ENDING INDEX 
//void quick(int quickArr[], int start, int end) 
//{
//    if (start < end)
//    {
//        //P IS THE PARTITIONING INDEX  
//        int p = partition(quickArr, start, end); 
//        quick(quickArr, start, p - 1);
//        quick(quickArr, p + 1, end);
//    }
//}
//
//
//int main_quick()
//{
//    int quickArr[100];
//    int sizeArray;
//    int p;
//    int end;
//    
//    cout << " ENTER THE SIZE OF THE ARRAY :";
//    cin >> sizeArray;
//
//    cout << "Before sorting array elements are - \sizeArray";
//    int i;
//    for (i = 0; i < sizeArray; i++)
//    {
//        cout << quickArr[i] << " ";
//    }
//    quick(quickArr, 0, sizeArray - 1);
//
//    cout << "\nAfter sorting array elements are - \sizeArray";
//    quick(quickArr, p + 1, end);
//
//    return 0;
//}