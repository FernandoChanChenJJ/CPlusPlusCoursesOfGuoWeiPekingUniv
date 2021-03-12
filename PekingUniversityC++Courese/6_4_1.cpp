#include <iostream> 
using namespace std;
int a1[4] = {4,15,6,9};
int a2[] = {3,18,56,40,78};
int FindMax(int a[], int len)
{
	int max = a[0];
	for(int i=1;i<len;++i)
	{
		if(a[i] > max)
			max = a[i]; 
	}
	return max;
}
int main()      
{
	cout << FindMax(a1,sizeof(a1)/sizeof(int)) << endl;
	cout << FindMax(a2,sizeof(a2)/sizeof(int));
	return 0;
}  
