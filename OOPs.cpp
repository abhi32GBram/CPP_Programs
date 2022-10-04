#include <iostream>
using namespace std;

class Line 
{
public :
	void set_length(double len);
	double get_length(void);
	Line(double len);

private:
	double length;
};

Line::Line(double len) 
{
	cout << "OBJECTS IS BEING CREATED , LENGTH IS : " << len << endl;
	length = len;
}

void Line::set_length(double len) 
{
	length = len;
}

double Line::get_length(void) 
{
	return length;
}

int main() 
{
	Line line(10.0);
	cout << "LENGTH OF THE LINE IS : " << line.get_length() << endl;

	line.set_length(13.0);
	cout << "LENGTH OF LINE : " << line.get_length() << endl;

	return 0;
}