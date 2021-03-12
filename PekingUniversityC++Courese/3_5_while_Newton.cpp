#include<iostream>  
#include <cmath>
using namespace std; 
int main()      
{
	double a,eps=1e-12;
	cin>>a;
	double x=a/2;
	while(fabs((x+a/x)/2-x) > eps)
	{
		x = (x+a/x)/2;
	}
	cout<<x;
	return 0;
}  
