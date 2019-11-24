#include <iostream>
using namespace  std;

class A {
public:
	virtual void f() = 0; //´¿Ğéº¯Êı
	void g() { this->f(); } //ok
	A() { } //f( ); // ´íÎó
};
class B : public A {
public:
	void f() { cout << "B: f()" << endl; }
};
int main() {
	B b;
	b.g();
	return 0;
}