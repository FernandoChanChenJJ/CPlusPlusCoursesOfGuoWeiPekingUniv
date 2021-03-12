#include <iostream> 
using namespace std; 
int main()      
{
	int n, sum = 0, fac = 1;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		fac *= i;  //sum += i!  i=1,2,...n
		sum += fac;
	}
	cout << sum;
	return 0;
}  
