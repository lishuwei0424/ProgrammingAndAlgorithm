#include <iostream>
using namespace std;

class son {
public:
	virtual ~son() { cout << "bye from son" << endl; };
};
class grandson : public son {
public:
	~grandson() { cout << "bye from grandson" << endl; };
};
int main() {
	son *pson;
	pson = new grandson;
	delete pson;
	return 0;
}