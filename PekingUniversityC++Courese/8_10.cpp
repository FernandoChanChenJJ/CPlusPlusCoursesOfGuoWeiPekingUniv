#include<iostream>  
using namespace std; 
int main()      
{  //ָ�����ַ��� 
	char *p = "Please input your name:\n";  //�ַ�������������Ϊchar * 
	cout << p;
	char name[20];
	char *pName = name;      //�ַ����������ҲΪchar * 
	cin >> pName;     //�����볬��19���ַ���������޷�����ʵ����� 
	cout << "Your name is " << pName; 
	return 0;
}  
