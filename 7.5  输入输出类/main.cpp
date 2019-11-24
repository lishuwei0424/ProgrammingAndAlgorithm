#define _CRT_SECURE_NO_WARNINGS  //该语句必须在#include<stdio.h>之前，否则还会报错
#include <iostream >
using namespace std;
int main() {
	double f; int n;
	freopen("D:\\1.txt", "r", stdin); //cin被改为从 t.txt中读取数据
	
	while (cin >> f >> n) {
		cout << f << "," << n << endl;
	}
	return 0;
}
