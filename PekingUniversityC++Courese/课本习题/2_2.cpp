#include <iostream> 
using namespace std; 
int main()      
{
	//求3个数字的平均数
	int a, b, c;
	double d;
	scanf("%d%d%d",&a,&b,&c);
	d = (a + b + c)/3.0;
	printf("%.3f",d); 
	return 0;
}  
