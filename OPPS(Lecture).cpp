#include <iostream>
using namespace std;

class student 
{
public :
	 static int roll_no;
	char div;
	char name[30];
	long int contact_no;

public:
	 
	void getdata();
	void display() 
	{
		cout << roll_no << "\t" << div << "\t" << name << "\t" << contact_no;
	}
};

int student::roll_no;
void student::getdata() 
{
	roll_no++;
	cout << " \n ENTER THE ROLL NO,DIVISION,NAME OF THE STUDENT : ";
	cin >> roll_no >> div >> name >> contact_no;
}

int main_OOPS()
{

	student s1,s2;

	s1.getdata();
	s1.display();

	s2.getdata();
	s2.display();

	system("pause>0");
	return 0;
}