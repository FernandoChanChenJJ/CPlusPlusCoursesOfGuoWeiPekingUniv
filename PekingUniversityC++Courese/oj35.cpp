#include <iostream>  
using namespace std;
#define N 1000010 
int main()      
{
	int n, a[N],k[N];
	a[1] = 1;
	a[2] = 2;
	for(int i = 3;i < N; i++)
	{
		a[i] = (2*a[i-1]+a[i-2])%32767;
	}
	cin >> n;	
	for(int i = 0; i < n; i++)
	{
		cin >> k[i];
	}
	for(int i = 0; i < n; i++)
	{
		cout << a[k[i]] << endl;
	}
	return 0;
}  
