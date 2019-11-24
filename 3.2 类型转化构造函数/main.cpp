#include <iostream>
using namespace std;

class Complex {
public:
	double real, imag;
	Complex(int i) { //类型转换构造函数
		cout << "IntConstructor called" << endl;
		real = i; imag = 0;
	}
	Complex(double r, double i)
	{
		real = r; imag = i;
	}
};
int main() {
	Complex c1(7, 8);
	Complex c2 = 12;
	c1 = 9; // 9被自动转换成一个临时Complex对象
	cout << c1.real << "," << c1.imag << endl;
	return 0;
}