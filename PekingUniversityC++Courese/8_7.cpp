#include<iostream>  
using namespace std; 
int main()      
{
	//ָ�������� 
	int a[200];
	int * p;
	p = a;      //a��������a����ʼ��ַ����a[0]; 
	*p = 10;    //a[0]=10 
	*( p + 1) = 20;     //a[1]=20
	p[0] = 30;    //*(p+0)��a[0]=30   p+n�ĵ�ַΪ����ַp+n*sizeof(int) 
	p[4] = 40;    //a[4]=40
	for(int i = 0; i < 10; ++i)
		*(p+i) = i;     //p[i]=i   a[i]=i
	++p;       //ָ��:��ַp+sizeof(int)  ��a[1] 
	cout << p[0] << endl;       //a[1]=1 
	p = a + 6;     //ָ��a[6]=6 
	cout << *p << endl;
	return 0;
}  
