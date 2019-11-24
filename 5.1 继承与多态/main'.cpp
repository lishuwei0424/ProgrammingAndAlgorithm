#include <iostream>
#include <string>
using namespace std;

class CStudent {
private:
	string name;
	string id;
	char gender;
	int age;
public:
	void PrintInfo();
	void SetInfo(const string &name_,const string &id_,int age_,char gender_);
	string GetName() {
		return name;
	}
};

class CUndergraduateStudent :public CStudent {

private:
	string  department;
public:
	void QualifiledForBaoyan() {
		cout << "qualified for baoyan" << endl;
	}

	void PrintInfo() {
		CStudent::PrintInfo();
		cout << "department:" << department << endl;
	}

	void SetInfo(const string &name_, const string &id_, int age_, char  gender_, const string &department_) {
		CStudent::SetInfo(name_, id_, age_, gender_);
		department = department_;
	}
};

void CStudent::PrintInfo() {
	cout << "Name:" << name << endl;
	cout << "ID" << id << endl;
	cout << "Age:" << age << endl;
	cout << "Gender:" << gender << endl;
}

void CStudent::SetInfo(const string &name_, const string &id_, int age_, char gender_){
	name = name_;
	id = id_;
	age = age_;
	gender = gender_;
}

int main()
{
	CUndergraduateStudent s2;
	s2.SetInfo("Harry Potter ", "118829212", 19, 'M', "Computer Science");
	cout << s2.GetName() << " ";
	s2.QualifiledForBaoyan();
	s2.PrintInfo();
	return 0;
}