#include<iostream>  
using namespace std; 
int main()      
{
	int n;
	scanf("%d",&n);
	//if(n % 2 == 1)
	if(n % 2)
		printf("It's odd.\n");
	else
		printf("It's even.\n");
	return 0;
}  
