#include <iostream>
using namespace std;

template <class T>
void Swap(T & a, T& b)
{
	T	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n = 1, m = 2;
	Swap(n, m); //编译器自动生成 void Swap(int &, int &)函数
	cout << n << " " << m<< endl;

	double f = 1.2, g = 2.3;
	Swap(f, g); //编译器自动生成 void Swap(double &, double &)函数
	cout << f << " "<<g << endl;
	return 0;

}