
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


    /*int arr[6], i, elem;*/

    cout << "====================";
    cout << "~ ARRAY INSERTION ~" << endl;
    cout << "====================";

    cout << "ENTER 5 ARRAY ELEMENTS: ";
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
    return 0;
}

/* TO INSERT AN ELEMENT IN ARRAY */
//
//int main()
//{
//   
//
//    return 0;
//}
