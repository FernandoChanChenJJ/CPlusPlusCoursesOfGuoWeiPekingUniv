/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.14
----------------------------*/ 

//
#include <iostream>
#include <cmath> 
#define eps 1e-12 
using namespace std; 
int main()      
{
	double a,b,c,d,x1,x2,t1,t2;
	scanf("%lf %lf %lf",&a,&b,&c);
	d = b * b -4 * a * c;
	t1 = -b/2/a;
	if(signbit(t1) && fabs(t1-0) < eps)     //signbit(x) 若符号位为1，返回1 
	{
		t1 = -t1;	
	}
	if (d >= 0)       //delta >= 0
	{
		t2 = sqrt(d)/2/a;
		x1 = t1 + t2;
		if(d > 0)
		{			
			x2 = t1 - t2;
			printf("x1=%.5f;x2=%.5f",x1,x2);
		}
		else
			printf("x1=x2=%.5f",x1);
	}
	else           //delta < 0
	{
		t2 = sqrt(-d)/2/a;
		if(a > 0)
		{
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",t1,t2,t1,t2);
		}
		else        //a<0
		{
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",t1,-t2,t1,-t2);	
		}	
		//sol2: t2 = fabs(sqrt(-d)/2/a);   printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",t1,t2,t1,t2);
	}
	return 0;
}  
/*
1) 判断两个浮点数相等不能直接用 a == b形式，
应该用 a-b> -eps && a-b < eps 形式，eps是很小的数，比如 1e-7

2) 要避免输出 -0.00000 ，避免办法是自己判断要输出的数足够接近于0了，
就直接输出 0.00000
*/
