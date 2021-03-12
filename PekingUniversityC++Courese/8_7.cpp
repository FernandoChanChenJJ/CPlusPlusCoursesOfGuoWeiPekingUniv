#include<iostream>  
using namespace std; 
int main()      
{
	//指针与数组 
	int a[200];
	int * p;
	p = a;      //a就是数组a的起始地址，即a[0]; 
	*p = 10;    //a[0]=10 
	*( p + 1) = 20;     //a[1]=20
	p[0] = 30;    //*(p+0)即a[0]=30   p+n的地址为：地址p+n*sizeof(int) 
	p[4] = 40;    //a[4]=40
	for(int i = 0; i < 10; ++i)
		*(p+i) = i;     //p[i]=i   a[i]=i
	++p;       //指向:地址p+sizeof(int)  即a[1] 
	cout << p[0] << endl;       //a[1]=1 
	p = a + 6;     //指向a[6]=6 
	cout << *p << endl;
	return 0;
}  
