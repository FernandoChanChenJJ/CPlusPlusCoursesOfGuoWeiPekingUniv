/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.9
----------------------------*/ 

//
#include<iostream>  
using namespace std; 
int main()      
{
	int a = 10;
	int b = 3;
	double d = a/b;
	cout << d << endl;     //3.0
	d = 5/2;
	cout << d << endl;     //2.0
	d = 5/2.0;
	cout << d << endl;     //2.5
	d = (double)a/b;        //3.333333
	cout << d << endl;
	d = double(a/b);        //3.333333
	cout << d << endl;
	return 0;
}  
