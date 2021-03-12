#include <iostream>
#include <cstring>
using namespace std;
struct Date{
	int year;
	int month;
	int day;
};
struct StudentEx{
	unsigned int ID;
	char szName[20];
	float fGPA;
	Date birthday;
};

//struct Employee{
//	string name;
//	int age;
//	int salary;
//	Employee *next;
//};
int main()
{
	StudentEx stu;
	cin >> stu.fGPA;
	stu.ID = 12345;
	strcpy(stu.szName,"Tom");
	cout << stu.fGPA <<endl;
	stu.birthday.year = 1984;
	unsigned int *p = & stu.ID;
	cout << stu.ID << endl;
	cout << stu.szName << endl;
	cout << stu.birthday.year << endl;
	cout << p <<endl;
	cout << *p <<endl;
	char *pc = stu.szName;
	cout << pc << endl;
	cout << endl;
	StudentEx stu2 = {1234,"Tom",3.78,{1984,12,28}};
	cout << stu2.ID << endl;
	cout << stu2.szName << endl;
	cout << stu2.fGPA <<endl;
	cout << stu2.birthday.year <<endl;
	cout << stu2.birthday.month << endl;
	cout << stu2.birthday.day <<endl;
	return 0;
}
