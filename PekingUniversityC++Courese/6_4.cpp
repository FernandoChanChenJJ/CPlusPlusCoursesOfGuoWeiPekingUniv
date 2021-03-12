#include<iostream>  
using namespace std; 
int Fac(int n)
{
	if(n < 2)
		return 1;
	else
		return n*Fac(n-1);
 } 
int main()      
{
	int n = 20;
	cout << Fac(n) ;
	return 0;
}  
