#include <iostream>  
#include <algorithm> 
using namespace std; 
int main()      
{
	int a[] = {15,4,3,9,7,2,6};
//	sort(a,a+7);
//	sort(a,a+3);
//	sort(a+2,a+5);
	sort(a+1,a+4,greater<int>());
//	sort(a,a+7,greater<int>());
	int n = sizeof(a)/sizeof(int);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}  
