#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b) {
	cout << "Template Max 1" << endl;
	return 0;
}
template <class T, class T2>
T Max(T a, T2 b) {
	cout << "Template Max 2" << endl;
	return 0;
}
double Max(double a, double b) {
	cout << "MyMax" << endl;
	return 0;
}
int main()
{
	int i = 4, j = 5;
	Max(1.2, 3.4); //调用Max(double, double)函数
	Max(i, j); //调用第一个T Max(T a, T b)模板生成的函数
	Max(1.2, 3); //调用第二个T Max(T a, T2 b)模板生成的函数
	return 0;
}