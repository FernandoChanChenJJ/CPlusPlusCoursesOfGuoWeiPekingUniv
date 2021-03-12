#include <iostream>
using namespace std;
int a1[] = {1,3,65,734,65,534,675,76};
void FindMaxMin(int a[], int n, int &max, int &min)   //通过引用可以方便得将结果传递回主调函数 
{
	max = min = a[0];
	for(int i = 1; i < n; ++i)
	{
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];	
	}		
	return;
}
int main()
{
	int max,min;
	FindMaxMin(a1,sizeof(a1)/sizeof(int),max,min);
	cout << "max=" << max << ", min=" << min <<endl; 
	return 0;
}
