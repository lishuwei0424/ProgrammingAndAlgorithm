#include <iostream>
using namespace std;

class Base {
public:
	void fun1() { this->fun2(); } //this是基类指针， fun2是虚函数，所以是多态
	virtual void fun2() { cout << "Base::fun2()" << endl; }
};
class Derived :public Base {
public:
	virtual void fun2() { cout << "Derived:fun2()" << endl; }
};
int main() {
	Derived d;
	Base * pBase = &d;
	pBase->fun1();
	return 0;
}
