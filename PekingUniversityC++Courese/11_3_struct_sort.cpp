#include <iostream>  
#include <cstring>
#include <algorithm> 
using namespace std; 
struct Student{
	char name[20];
	int id;
	double gpa;
};
Student students [] = {
	{"Jack",112,3.4	},{"Mary",102,3.8},{"Mary",117,3.9} ,
	{"Ala",333,3.5},{"Zero",101,4.0} };
	
struct Rule1{
	bool operator()(const Student &a1, const Student &a2) const {
			return a1.id < a2.id;       //id从小到大 
	}
};
struct Rule2{
	bool operator()(const Student &a1,const Student &a2)
	{
		return a1.gpa > a2.gpa;        //gpa从大到小 
	}
}; 
struct Rule3{
	bool operator()(const Student &a1,const Student &a2){
			if(stricmp(a1.name, a2.name) < 0)   //按名字字符从小到大 
				return	true;
			else
				return false; 
	}
}; 
void Print(Student s[], int size)
{
	for(int i=0; i < size; i++)
	{
		cout << "{\"" << s[i].name << "\"," << s[i].id << "," << s[i].gpa << "} ";
	}
	cout << endl;
}
int main()      
{
	int n = sizeof(students)/sizeof(Student);
	sort(students,students+n,Rule1());
	Print(students,n); 
	sort(students,students+n,Rule2());
	Print(students,n); 
	sort(students,students+n,Rule3());
	Print(students,n);  
	return 0;
}  
