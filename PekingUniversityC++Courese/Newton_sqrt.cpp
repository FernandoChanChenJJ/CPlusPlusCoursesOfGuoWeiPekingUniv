//Newton sqrt method
#include <iostream>
#include <cmath>
#define EPS 1e-12 
using namespace std; 
int main()      
{
	double x, a;
	int cnt = 0;
	scanf("%lf",&a);
	x = a/2;
	while(fabs((x+a/x)/2-x) > EPS)     //可以分拆，避免使用fabs函数 
	{
		x = (x+a/x)/2;
		cnt++;	
	}
	printf("iter times =%d , a = %.6lf , sqrt root = %.16lf \n",cnt, a, x);
	printf("        sqrt root by calc: sqrt(%.6lf)= %.16lf",a , sqrt(a));
	return 0;
}  
