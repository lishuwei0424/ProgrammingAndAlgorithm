#include <memory>
#include <iostream>
using namespace std;
struct A {
	int n;
	A(int v = 0) :n(v) { }
	~A() { cout << n << " destructor" << endl; }
};
int main()
{
	shared_ptr<A> sp1(new A(2)); //sp1托管A(2)
	shared_ptr<A> sp2(sp1); //sp2也托管 A(2)
	cout << "1)" << sp1->n << "," << sp2->n << endl; //输出1)2,2
	shared_ptr<A> sp3;
	A * p = sp1.get(); //p 指向 A(2)
	cout << "2)" << p->n << endl;
		sp3 = sp1; //sp3也托管 A(2)
	cout << "3)" << (*sp3).n << endl; //输出 2
	sp1.reset(); //sp1放弃托管 A(2)
	if (!sp1)
		cout << "4)sp1 is null" << endl; //会输出
	A * q = new A(3);
	sp1.reset(q); // sp1托管q
	cout << "5)" << sp1->n << endl; //输出 3
	shared_ptr<A> sp4(sp1); //sp4托管A(3)
	shared_ptr<A> sp5;
	//sp5.reset(q); 不妥，会导致程序出错
	sp1.reset(); //sp1放弃托管 A(3)
	cout << "before end main" << endl;
	sp4.reset(); //sp1放弃托管 A(3)
	cout << "end main" << endl;
	return 0; //程序结束，会delete 掉A(2)
}