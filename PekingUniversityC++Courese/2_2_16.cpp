#include<iostream>  
using namespace std; 
int main()      
{
	double r;
	scanf("%lf",&r);
//	float r;              //��Ҫ��float,���Ȳ��� 
//	scanf("%f",& r);
	double v = 4.0/3 * 3.14 * r * r * r;
	printf("%.2f",v);
	return 0;
}  
