/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.9
----------------------------*/ 

//
#include<iostream>  
using namespace std; 
int main()      
{
	int a = 0, b = 1;
	bool n = (a++) && (b++);   //n=0,a=1,b=1
	cout << a << "," << b <<endl;
	n = a++ && b++;           //a=2 b=2 n=1
	cout << a << "," << b <<endl;
	n = a++ || b++;           //a=3 b=2 n=1
	cout << a << "," << b <<endl;
	return 0;
}  
