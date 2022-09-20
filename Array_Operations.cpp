
#include<iostream>
using namespace std;

// TO DLETE AN ELEMENT IN ARRAY 
int main() 
{

    int arr[100], tot, i, elem, j, found = 0;

    cout << "====================";
    cout << "~ ARRAY DELETION ~";
    cout << "====================" << endl;
   
    cout << "\n \n ENTER THE SIZE OF ARRAY : ";
    cin >> tot;
    cout << "ENTER " << tot << " ELEMENTS: ";

    for (i = 0; i < tot; i++) 
    {
        cin >> arr[i];
    }
           
    cout << "\nENTER ELEMENT TO DELETE: ";
    cin >> elem;
    for (i = 0; i < tot; i++)
    {
        if (arr[i] == elem)
        {
            for (j = i; j < (tot - 1); j++)
                arr[j] = arr[j + 1];
            found = 1;
            i--;
            tot--;
        }
    }
    if (found == 0) 
    {
        cout << "\nELEMENT NOT FOUND IN THE ARRAY!";
    }
        
    else
    {
        cout << "\nELEMENT DELETED SUCCESSFULLY!" << endl;
        cout << "\n\nTHE NEW ARRAY IS:\n" << endl;
        for (i = 0; i < tot; i++) 
        {
            cout << arr[i] << "  ";
        }
            
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;

    // INSERTING ELEMENTS IN ARRAY 
    /*int arr[6], i, elem;*/

    cout << "====================";
    cout << " ARRAY INSERTION ~";
    cout <<  "====================";

    cout << "\n ENTER 5 ARRAY ELEMENTS: \n ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    //TAKING THE ELEMENTS OF THE ARRAY

    cout << "\nENTER ELEMENT TO INSERT: ";
    cin >> elem;
    arr[i] = elem;

    //TAKING THE ELEMENTS TO INSERT IN THE ARRAY

    cout << "\nTHE NEW ARRAY IS:\n";
    for (i = 0; i < 6; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    
    cout << " ----------------------------------------------------------" << endl;

    // INSERTING ELEMENTS IN BETWEEN 2 ELEMENTS (USING POINTER)

    int sizeArr;

    cout << "====================";
    cout << "~ ARRAY AMMENDING AT RUNTIME (using arrays )  ";
    cout << "====================";

    cout << " \n \n ENTER SIZE OF ARRAY : ";
    cin >> sizeArr;

    int* myArr = new int[sizeArr];


    for (i = 0; i < sizeArr; i++) 
    {
        cout << " \n ELEMENT- [" << i << "]" << " " << ":";
        cin >> myArr[i];
    }
    for (i = 0; i < sizeArr; i++) 
    {
        cout << myArr[i] << " ";
          // *(myArr+i) : CAN BE RE-WRITTEN
    }
    delete[]myArr;
    myArr = NULL;
    

}
