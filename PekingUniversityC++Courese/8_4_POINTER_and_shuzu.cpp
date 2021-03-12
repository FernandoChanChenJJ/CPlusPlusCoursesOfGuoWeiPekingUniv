#include <iostream> 
using namespace std;
int main()      
{
	int a[200];
	int *p;
	p = a;     //p指向数组a的首地址即a[0]
	cout << p <<endl;
	cout << a << endl; 
	*p = 10;   //a[0]= 10
	cout << a[0]  << endl;
	*(p + 1) = 20;   //(p+1)指向p的地址+sizeof(int),*(p+1)即a[1] 
	cout << a[1]  << endl;
	p[0] = 30;     //p[0] 等价于*(p+0)即*p ,即a[0]=30
	cout << a[0]  << endl; 
	p[4] = 40;     //a[4] = 40
	cout << a[4]  << endl;
	for(int i = 0;i<10;++i)
		*(p + i) = i;         //a[0]=0,a[1]=1,a[2]=2,...
	++p;     //p指向a[1] 
	cout << p[0] << endl;    //p[0]=a[1]=1 
	p = p + 6;
	cout << *p << endl;    //*p = a[7]= 7
	p = a + 6;     //p = a[6]
	cout << *p << endl;    //*p = a[6]= 6
	return 0;
}  
