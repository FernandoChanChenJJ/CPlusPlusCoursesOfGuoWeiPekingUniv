/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.9
----------------------------*/ 

//
#include<iostream>  
using namespace std; 
int main()      
{
	int n1,n2=5;
	n2 ++;    //n2=6
	++n2;     //n2=7
	n1 = n2 ++;   //n2=8 ,n1=7
	cout << n1 << ","<< n2<<endl;
	n1 = ++ n2;    //n2=9,n1=9
	cout << n1 << ","<< n2<<endl;
	return 0;
}  
