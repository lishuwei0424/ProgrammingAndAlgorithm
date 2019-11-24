#include <iostream>
using namespace std;

class String {
private:
	char * p;
public:
	int b;
	String() {
		b = 5;
		p = new char[10];
	}
	~String();
};
String ::~String() {
	delete[] p;
}

int main() {
	String* a2 = new String;;
	delete a2;
	cout << a2->b << endl;

	return 0;
}

