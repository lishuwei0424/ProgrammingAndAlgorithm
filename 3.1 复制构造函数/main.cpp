#include <iostream>
using namespace std;

class   A {
public:
	int v;
	A(){
		
	}
	A(int n) { 
		v = n; 
	}
	A(const A& a){
		v = a.v;
		cout << "复制构造函数被调用" << endl;
	}
};

A Func1() {
	A b(4);
	cout << b.v << endl;

	return b;
}

void Func2(A a1) { }

int main() {
	cout << Func1().v << endl;
	A a2;
	Func2(a2);

	return 0;
}


