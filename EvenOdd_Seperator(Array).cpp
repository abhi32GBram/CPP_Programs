#include <iostream>
using namespace std;
int main_evenOdd()
{
    int arr[10], even[10], odd[10], evenNo = 0, oddNo = 0, i, n;


    cout << " ENTER RANGE OF ARRAY : ";
    cin >> n;
    cout << "ENTER" << " " << n << " " << "ELEMENTS :" << endl;

    for (i = 0; i < n; i++ ) 
    {
        cin >> arr[i];
    }
        
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even[evenNo++] = arr[i];
        else
            odd[oddNo++] = arr[i];
    }
    cout << "THE EVEN NUMBERS ARE: ";
    for (i = 0; i < evenNo; i++) 
    {
        cout << even[i] << " "; 
    }
        
    cout << "\nTHE ODD NUMBERS ARE: ";
    for (i = 0; i < oddNo; i++)
        cout << odd[i] << " ";

    system("pause>0");
    return 0;
}