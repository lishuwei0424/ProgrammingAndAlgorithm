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
	ifstream iutFile("D:\student.dat", ios::in | ios::binary);
	if (!iutFile) {
		cout << "errror" << endl;
		return 0;
	}

	while (iutFile.read((char*)&s1, sizeof(s1))) {
		cout << s1.szName << s1.nScore<<endl;
	}

	iutFile.close();
	return 0;
}
