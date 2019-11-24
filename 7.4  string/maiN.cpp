#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1("hello world");
	cout << s1.capacity() << endl;
	cout << s1.max_size() << endl;
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1.empty() << endl;
	cout << s1 << "aaa" << endl;
	s1.resize(s1.length() + 10);
	cout << s1.capacity() << endl;
	cout << s1.max_size() << endl;
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1 << "aaa" << endl;
	s1.resize(0);
	cout << s1.empty() << endl;
	return 0;
}
