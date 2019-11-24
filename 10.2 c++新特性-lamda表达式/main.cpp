#include <iostream>
using namespace std;

int main() {
	int x = 100, y = 200, z = 300;
	cout << [ ](double a, double b){return a + b; }(1.2, 2.5)<< endl;
	auto ff = [=, &y, &z](int n) {
		cout << x << endl;
		y++, z++;
		return n * n;
	};

	cout << ff(15) << endl;
	cout << y << "," << z << endl;
	return 0;
}