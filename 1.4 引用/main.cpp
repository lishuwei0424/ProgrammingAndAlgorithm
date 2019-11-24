#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 5, b = 20;
	cout << "before" << a << " " << b << endl;

	swap(a,b);
	cout << "after" << a << " " << b << endl;

	return 0;

}