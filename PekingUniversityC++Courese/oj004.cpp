/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.9
----------------------------*/ 

//
#include<iostream>  
using namespace std; 
int main()      
{
	short n;
	cin >> n;
	if(0 <= n && n < 256)
	{
		cout << char(n) <<endl;
	}
	return 0;
}  
