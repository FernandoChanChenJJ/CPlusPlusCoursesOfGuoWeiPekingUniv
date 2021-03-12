#include<iostream>  
using namespace std; 
int main()      
{
	int *p = (int *)40000;
	cout << p << endl;
	int a = 1000;
	p =  &a;
	cout << p << endl;
	return 0;
}  
