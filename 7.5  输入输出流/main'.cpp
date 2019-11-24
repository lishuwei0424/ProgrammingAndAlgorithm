#include <iostream >
using namespace std;
int main() {
	int x;
	char buf[100];
	cin >> x;
	cin.getline(buf, 90);
	cout << buf << endl;
	return 0;
}
