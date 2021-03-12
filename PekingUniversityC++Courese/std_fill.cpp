#include<iostream>  
#define N 10
int a[N];
using namespace std; 
int main()      
{
	//int n;
	//std::fill(a,a+sizeof(a)/sizeof(int),1);
	std::fill(a,a+N,3);
	for(int i = 0; i < N; i++)
	{
		cout << a[i]<< " ";
	}
	return 0;
}  
