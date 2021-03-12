#include<iostream>  
using namespace std; 
int main()      
{  //指针与字符串 
	char *p = "Please input your name:\n";  //字符串常量的类型为char * 
	cout << p;
	char name[20];
	char *pName = name;      //字符数组的类型也为char * 
	cin >> pName;     //若输入超过19个字符，则程序无法正常实现输出 
	cout << "Your name is " << pName; 
	return 0;
}  
