#include <iostream>
using namespace std;

class Student {
public:
	int no;
	char name[10];
	int eng;
	int math;
	void showData();
	void showEng();
};

void Student::showData()
{
	cout << no << endl;
	cout << name << endl;
	cout << eng << endl;
	cout << eng << endl;
};

void Student::showEng()
{
	cout << "English : " << eng << endl;
}