/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.14
----------------------------*/ 

//
#include <iostream>  
using namespace std; 
int main()      
{
	int n,sum=0,m;
	double mean;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d",&m);
		sum += m;
	}
	mean = (double)sum/n;
	printf("%d %.5f",sum,mean);
	//cout << sum << " " << fixed << setprecision(5) << mean;	
	return 0;
}  
