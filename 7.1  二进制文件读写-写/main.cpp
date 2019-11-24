#include <iostream>
#include <fstream>
using namespace std;

class CStudent
{
public:
	char szName[20];
	int nScore;
};

int main()
{
	CStudent s1;
	ofstream outFile("D:\student.dat", ios::in|ios::binary);
	if (!outFile){
		cout << "errror" << endl;
		return 0;
	}

	while (cin >> s1.szName >> s1.nScore){
		if(stricmp(s1.szName,"exit")==0){
			break;
		}
		outFile.write((char*)&s1,sizeof(s1));
	}

	outFile.close();
	return 0;
}
