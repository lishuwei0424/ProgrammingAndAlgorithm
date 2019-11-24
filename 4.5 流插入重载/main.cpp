#include <iostream>
using namespace std;

class CStudent
{
public:
	int m_age;
};

ostream&  operator<<(ostream& o, const CStudent& s) {
	o << s.m_age;
	return o;
}

int main() {
	CStudent s;
	s.m_age = 5;
	cout << s << "hello";
	return 0;
}