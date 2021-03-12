#include <iostream> 
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
StudentEx MyClass[50];
int main()      
{
	StudentEx MyClass2[50] = {
		{1234,"Tom",3.78,{1984,12,28}},
		{1235,"Jack",3.25,{1985,12,23}},
		{1236,"Mary",4.00,{1984,12,21}},
		{1237,"Jone",2.78,{1985,2,28}},
	};
	MyClass[1].ID = 1267;
	MyClass[2].birthday.year = 1986;
	int n = MyClass[2].birthday.month;
	cin >> MyClass[0].szName;
	return 0;
}  
/*
StudentEx *pStudent,*pstu;
StudentEx stu1;
pStudent = &stu1;
StudentEx stu2 = *pStudent;
pstu = &stu2;
pstu->ID = 123;
(*pstu).fGPA = 3.48;
cout << stu.ID << endl;
cout << stu.fGPA <<endl;
*/
