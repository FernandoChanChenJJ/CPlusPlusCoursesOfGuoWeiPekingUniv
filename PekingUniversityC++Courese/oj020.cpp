/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.14
----------------------------*/ 

//
#include<iostream>  
using namespace std; 
int main()      
{
	int a,n,fac=1;
	cin >> a >> n;
	for(int i=0 ; i<n ; i++)
	{
		fac *= a;
	}
	cout << fac;
	return 0;
}  
