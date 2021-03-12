#include <iostream>
#include <cstdio>  
using namespace std; 
int main()      
{
    const int N = 100;
	int n ,a[N] ,i = 0;
	//while( scanf("%d",&n) != EOF )
	while( cin >> n )
	{
		a[i] = n;
		i++;
		if(i > 100)
		{
			break;
		} 
	} 
	for(int j = i-1 ; j >= 0 ; j-- )
	{
		cout << a[j]<<" ";
	}
	return 0;
}  
