#include <iostream> 
using namespace std; 
int main()      
{
	int a, n,res = 1;
	cin >> a >> n;
	for(int i=0;i<n;i++)
	{
		res *= a;	
	}
	cout << res;
	return 0;
}  
