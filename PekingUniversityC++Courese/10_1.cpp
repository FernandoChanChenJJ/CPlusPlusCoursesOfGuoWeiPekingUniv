//结构体示例 
#include<iostream>  
using namespace std;
struct Date {
	int year;
	int month;
	int day;
}; 
struct StudentEx {
	unsigned ID;
	char szName[20];
	float fGPA;
	Date birthday;
};
int main()      
{
	StudentEx stu = {1234,"Tom",3.78,{1984,12,28}};
	cout << stu.ID << " " << stu.szName << " " << stu.fGPA << " " << endl;
	cout << stu.birthday.year << "-" << stu.birthday.month << "-" << stu.birthday.day ; 
	return 0;
}  
