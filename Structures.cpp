#include<iostream>
using namespace std;


// MAKING A STRUCTURE FOR A PHONE WITH VARIOUS PROPERTIES 
struct Phones
{
	string name;
	int storageSpace;
	string colour;
	float price;
};

// MAKING A NEW STRUCTURE OF A PERSON 
struct Person 
{
	string Name;
	int Age;
	Phones smartphones;
};

// MAKING A FUNCTION TO DISPLAY THE PROPERTIES OF THE USER INPUT FOR MULTIPLE ITERATIONS 
void display_PhoneInfo(Phones smartPhones_1) 
{

	cout << "NAME OF PHONE : " << smartPhones_1.name << endl;
	cout << "STORAGE SPACE :  " << smartPhones_1.storageSpace << " GB" << endl;
	cout << "COLOUR : " << smartPhones_1.colour << endl;
	cout << "PRICE  :" << smartPhones_1.price << endl;

}
// MAKING A FUNCTION FOR DISPLAYING THE PERSON'S INFO WITH THE DESIRED SMARTPHONE 
void display_PersonInfo(Person entity )
{
	cout << "NAME : " << entity.Name << endl;
	cout << "AGE : " << entity.Age << endl;
	display_PhoneInfo(entity.smartphones);
}
int main_structures()
{
	// MAKE INSTANCE OF THE STRUTURE
	Phones smartPhones_1;

	// CALL THE STRUCTURE WITH THE ATTRIBUTES DEFINED BY THE USER 
	smartPhones_1.name = " IPhone 10";
	smartPhones_1.storageSpace = 64;
	smartPhones_1.colour = "White";
	smartPhones_1.price = 9999.90;
		
	Phones smartPhones_2;

	smartPhones_2.name = "One Plus 8";
	smartPhones_2.storageSpace = 128;
	smartPhones_2.colour = "Red ";
	smartPhones_2.price = 1200.00;



	//// DISPLAYING THE USER INPUT BY CALLING THE USER INPUT 

	//cout << "NAME OF PHONE : " << smartPhones_1.name << endl;
	//cout << "STORAGE SPACE :  " << smartPhones_1.storageSpace << " GB" << endl;
	//cout << "COLOUR : " << smartPhones_1.colour << endl;
	//cout << "PRICE  :" << smartPhones_1.price << endl;	

	// Displaying the 
	display_PhoneInfo(smartPhones_1);
	cout << "---------------------------\n";
	display_PhoneInfo(smartPhones_2);
	cout << "----------------------------\n";
	// CREATING AN INSTANCE FOR THE 'PERSON' STRUCTURE
	Person entity;

	entity.Name = "Abhiram";
	entity.Age = 19;
	entity.smartphones = smartPhones_2;

	display_PersonInfo(entity);
	

	return 0;
	system("pause>0");

}