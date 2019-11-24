#include <iostream>
using namespace std;

class CTest {
private:
	int n;
public:
	CTest() { n = 1; }
	int GetValue() const { return n; }
	int GetValue() { return 2 * n; }
};
int main() {
	const CTest objTest1;
	CTest objTest2;
	cout << objTest1.GetValue() << "," << objTest2.GetValue();
	return 0;
}