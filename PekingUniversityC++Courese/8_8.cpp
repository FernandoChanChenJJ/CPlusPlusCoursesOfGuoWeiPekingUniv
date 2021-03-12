#include<iostream>  
using namespace std; 
void Reverse(int a[], int n)
{
	int tmp, *p;
	p = a;
	for (int i = 0; i < n/2 ; i++)
	{
		tmp = p[i];
		p[i] = p[n-1-i];
		p[n-1-i] = tmp;	
	}	
}
int main()      
{
	//指针和数组
	const int N = 5;
	int a[N] = {1,2,3,4,5};
	Reverse(a,sizeof(a)/sizeof(int));
	for(int i = 0; i < N; i++)
		cout << *(a+i) << ","; 
	return 0;
}  
