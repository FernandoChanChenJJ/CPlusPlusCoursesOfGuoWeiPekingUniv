#include<iostream>  
using namespace std; 
int main()      
{
	int f = 1,sum = 0,n;
	cin >> n;
	for( int i = 1;i <= n; i++)
	{
		f *= i;
		sum += f;
	}
	cout << sum;
	return 0;
}  
