#include <stdio.h>  
using namespace std; 
void PrintMin(int a, int b)
{
	if(a < b)
		printf("%d",a);
	else
		printf("%d",b);
}
int main()      
{
	//函数指针的例子
	void (*pf)(int,int);
	int x = 14, y = 5;
	pf = PrintMin;
	pf(x,y); 
	return 0;
}  
