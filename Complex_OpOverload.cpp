#include<iostream>
using namespace std;

class Complex
{
public:
	void getData();
	void displayData();
	void cmplxAdd();
	void cmplxMulti();

	friend istream& operator >> (istream& in, Complex& object);
	friend ostream& operator << (istream& out, Complex& object);

	//MAKING THE CONSTRUCTOR 

	Complex()
	{
		cout << " \nNEW OBJECT CREATED !!!";
	}

	Complex operator + (const Complex& obj)
	{
		Complex add;

		add.real = real + obj.real;
		add.imaginary = imaginary + obj.imaginary;

		return add;
	}

	// THE '+' OPERATOR IS OVERLOADED 

	Complex operator *(const Complex& obj)
	{
		Complex multiply;

		multiply.real = real + obj.imaginary;
		multiply.imaginary = imaginary + obj.imaginary;

		return multiply;
	}
	//private:

	float real;
	float imaginary;
};

istream& operator >> (istream& in, Complex& c)
{
	cout << "ENTER THE REAL PART OF THE COMPLEX NUMBER :  ";
	cin >> c.real;

	cout << "ENTER THE IMAGINARY PART OF THE COMPLEX NUMBER : ";
	cin >> c.imaginary;

	return c;
}

ostream& operator << (ostream& out, Complex& c)
{
	out << c.real;
	out << "+ i " << c.imaginary << endl;

	return out;
}

void Complex::getData()
{
	cout << " ENTER THE REAL PART : ";
	cin >> real;

	cout << "ENTER THE IMAGINARY PART :";
	cin >> imaginary;
}

void Complex::displayData()
{
	cout << " YOU'RE COMPLEX NUMBER IS : " << real << " + " << imaginary << "j";

}

int main()
{
	Complex cc;

	cc.getData();
	cc.displayData();

	cout << " ENTER THE 1ST COMPLEX NUMBER : ";
	Complex c1;

	c1.getData();

	cout << " ENTER THE 2ND COMPLEX NUMBER : ";
	Complex c2;

	c2.getData();


	Complex result;
	result = c1 + c2;

	result.cmplxAdd();


	Complex prod;
	prod = c1 * c2;
	prod.cmplxMulti();

	Complex C;

	cout << "ENTER THE COMPLEX OBJECTS : ";
	cin >> C;

	cout << C;

	return 0;
}