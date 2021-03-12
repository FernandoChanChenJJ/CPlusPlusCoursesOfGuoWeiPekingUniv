#include <iostream> 
using namespace std; 
#define N 100
int a[N];    //数组一般不要定义在main里面，尤其是大数组 
int main()      
{
	for(int i=0;i<N;++i)
	{
		cin >> a[N-1-i];
	}
	for(int i=0;i<N;++i)
	{
		cout << a[i] << " ";
	}
	return 0;
}  
