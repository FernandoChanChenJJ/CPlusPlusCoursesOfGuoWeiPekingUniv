/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.14
----------------------------*/ 

//
#include<iostream>  
using namespace std; 
int main()      
{
	long long int N;
	//int N;       output limit exceed
	cin >> N;
	while( true ){
		if(N == 1)
		{
			cout << "End";
			break;	
		}
		if( N%2 == 1)
		{
			cout << N <<"*";
			N = 3 * N + 1;
			cout << "3+1=" << N << endl; 	
		}
		else
		{
			cout << N << "/";
			N /= 2;
			cout << "2=" << N << endl;	
		}	
	}
	return 0;
}  
