/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.9
----------------------------*/ 

//
#include<iostream>  
using namespace std; 
int main()      
{
	int n1 =4 ,n2 = 5,n3;
	n3 = (n1 > n2);
	cout << n3 << ",";        //0
	n3 = (n1 < n2);
	cout << n3 <<",";         //1
	n3 = (n1 == 4);
	cout << n3 <<",";         //1
	n3 = (n1 != 4);
	cout << n3 <<",";         //0
	n3 = (n1 == 5);           //0
	cout << n3 ;
	return 0;
}  
