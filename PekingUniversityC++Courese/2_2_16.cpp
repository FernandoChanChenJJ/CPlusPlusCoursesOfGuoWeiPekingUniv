#include<iostream>  
using namespace std; 
int main()      
{
	double r;
	scanf("%lf",&r);
//	float r;              //不要用float,精度不够 
//	scanf("%f",& r);
	double v = 4.0/3 * 3.14 * r * r * r;
	printf("%.2f",v);
	return 0;
}  
