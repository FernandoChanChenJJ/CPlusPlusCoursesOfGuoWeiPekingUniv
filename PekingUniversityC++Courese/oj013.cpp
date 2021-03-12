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
	if(signbit(t1) && fabs(t1-0) < eps)     //signbit(x) ������λΪ1������1 
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
1) �ж�������������Ȳ���ֱ���� a == b��ʽ��
Ӧ���� a-b> -eps && a-b < eps ��ʽ��eps�Ǻ�С���������� 1e-7

2) Ҫ������� -0.00000 ������취���Լ��ж�Ҫ��������㹻�ӽ���0�ˣ�
��ֱ����� 0.00000
*/
