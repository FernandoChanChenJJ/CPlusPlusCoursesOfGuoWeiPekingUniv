#include <iostream>
#define N 5    //使用符号常量便于修改 
int a[N];      //数组一般不要定义在main函数里面，尤其是大数组 
using namespace std; 
int main()      
{
    //const int N = 5;
	//int a[N];
	for(int i = 0 ; i < N ; i++ )
	{
		cin >> a[i];       //scanf("%d",&a[i]); 
	}
	for(int j = N-1 ; j >= 0 ; j-- )
	{
		cout << a[j]<<" ";
	}
	return 0;
}  
