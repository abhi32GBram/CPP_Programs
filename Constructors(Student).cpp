#include<iostream>
using namespace std;

class StudentInfo
{
private:
    char name[20], Address[20];
    int roll, zip;

public : 
    StudentInfo();//Constructor 
    void ReadData();
    void disp();
};

StudentInfo::StudentInfo()
{
    cout << "\nTHIS IS STUDENTINFO DETAILS CONSTRUCTOR CALLED..........." << endl;
}

void StudentInfo::ReadData()
{
    cout << "\nENTER THE STUDENT NAME : ";
    cin >> name;
    cout << "\nENTER THE STUDENT ROLL NO : ";
    cin >> roll;
    cout << "\nENTER THE STUDENT ADDRESS: ";
    cin >> Address;
    cout << "\nENTER THE ZIPCODE : ";
    cin >> zip;
}

void StudentInfo::disp()
{
    cout << "\nTHE ENTERED STUDENT DETAILS ARE SHOWN BELOW \n";
    cout << "------------------------------------------------------" << endl;
    cout << "\nSTUDENT NAME :: " << name << endl;
    cout << "\nROLL NO   IS :: " << roll << endl;
    cout << "\nADDRESS IS :: " << Address << endl;
    cout << "\nZIPCODE IS :: " << zip;
}

//StudentInfo :: ~StudentInfo()
//{
//    cout << "\n\nStudentInfodent Detail is Closed.............\n";
//}


int main_StudentINfo()
{
    StudentInfo s;
    s.ReadData();
    s.disp();

    return 0;
}