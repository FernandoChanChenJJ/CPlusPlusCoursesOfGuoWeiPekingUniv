#include <iostream> 
using namespace std; 
int main()      
{
	//freopen("c:\\tmp\\test.txt","r",stdin);
	int n, max = 0;
	while(cin>>n)
	{
		if(n > max)
			max = n;
	}
	cout << max;
	return 0;
}  
