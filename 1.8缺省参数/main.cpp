#include <iostream>
using namespace std;

void fun(int a = 1, int b = 2, int c = 3)
{
	cout << a << " " << b << " " << c << endl;
}
int main()
{
	fun(2, 3, 5);
	fun(2);
	return 0;
}

