/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.14
----------------------------*/ 

//
#include <iostream>  
#include <iomanip> 
using namespace std; 
int main()      
{
	int n,sum=0,m;
	double mean;
	cin >> n; 
	for(int i=0 ; i<n ; i++)
	{
		cin >> m;
		sum += m;
	}
	cout << sum << " " << fixed << setprecision(5) << (double)sum/n;	
	return 0;
}  
