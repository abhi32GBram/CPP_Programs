//#include<iostream>
//using namespace std;
//class Complex {
//public:
//	double real, img;
//	Complex()
//	{
//	}
//	Complex(double r, double i) {
//
//		real = r;
//		img = i;
//	}
//	Complex Add(Complex);
//	void show(void);
//	void get(void);
//};
//void Complex::show() {
//	cout << "YOUR COMPLEX NUMBER IS: " << real << " + " << "i" << img << endl;
//
//}
//void Complex::get() {
//	cout << "ENTER REAL PART" << endl;
//	cin >> real;
//	cout << "ENTER IMAGINARY PART" << endl;
//	cin >> img;
//
//}
//Complex Complex::Add(Complex C) {
//	real += C.real;
//	img += C.img;
//	return(Complex(real, img));
//}
//int main() {
//	Complex C1, C2, C3;
//	C1.get();
//	C2.get();
//	C3 = C1.Add(C2);
//	C3.show();
//	return 0;
//
//}