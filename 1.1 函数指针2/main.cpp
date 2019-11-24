#include  <cstdio>
#include  <cstdlib>
#include  <iostream>

using namespace std;


int MyCompare(const void* a,const void* b)
{
	const int* p1,*p2;
	p1 = (const int*)a;
	p2 = (const int*)b;
	return  (*p1%10) -(*p2 % 10);
}

int main()
{
    #define NUM  5
	int  array[NUM] = {12,11,34,42,9};
	qsort(array, NUM, sizeof(int),MyCompare);
	for (int i = 0; i < NUM; i++)
		std::cout << array[i] << std::endl;

	return  0;
}
