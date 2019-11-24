#include  <iostream>
using namespace std;

void  PriMin(int a, int b){
	if (a < b){
		cout <<"最小的值是"<< a << endl;
	}
	else {
		cout<< "最小的值是" << b << endl;
	}
}

int main()
{
	void (*f)(int,int);
	f = PriMin;
	int x = 4, y = 5;
	f(4,5);
	return 0;
}

