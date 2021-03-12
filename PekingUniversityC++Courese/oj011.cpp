   /*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.14
----------------------------*/ 

//
#include<iostream>
#define PI 3.14159
#define EPS 1e-6  
using namespace std; 
int main()      
{
	double tmp,V,V0=20 * 1000;
	int h,r,n;
	scanf("%d %d",&h,&r);
	V = PI * r * r * h;
	tmp = V0 / V; 
	if(tmp-int(tmp) < EPS)
		n = int(tmp);	
	else
		n = int(tmp)+1;	
	printf("%d",n);	
	return 0;
}  
