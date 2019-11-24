#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> a{1,2,3,4};
	int total = 0;
	for_each(a.begin(), a.end(), [&](int&x) {total += x; x *= 2; });
	cout << total << endl;

	for_each(a.begin(), a.end(), [](int&x) { cout << x << endl; });
	return 0;
}