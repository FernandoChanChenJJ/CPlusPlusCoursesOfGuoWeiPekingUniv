#include <iostream> 
using namespace std;
int main()      
{
	int a[200];
	int *p;
	p = a;     //pָ������a���׵�ַ��a[0]
	cout << p <<endl;
	cout << a << endl; 
	*p = 10;   //a[0]= 10
	cout << a[0]  << endl;
	*(p + 1) = 20;   //(p+1)ָ��p�ĵ�ַ+sizeof(int),*(p+1)��a[1] 
	cout << a[1]  << endl;
	p[0] = 30;     //p[0] �ȼ���*(p+0)��*p ,��a[0]=30
	cout << a[0]  << endl; 
	p[4] = 40;     //a[4] = 40
	cout << a[4]  << endl;
	for(int i = 0;i<10;++i)
		*(p + i) = i;         //a[0]=0,a[1]=1,a[2]=2,...
	++p;     //pָ��a[1] 
	cout << p[0] << endl;    //p[0]=a[1]=1 
	p = p + 6;
	cout << *p << endl;    //*p = a[7]= 7
	p = a + 6;     //p = a[6]
	cout << *p << endl;    //*p = a[6]= 6
	return 0;
}  
