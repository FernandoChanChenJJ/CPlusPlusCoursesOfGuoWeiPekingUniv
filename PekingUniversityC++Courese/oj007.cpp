/*-------------------------- 
  Author:Fernando Chan
  Date: 2020.1.14
----------------------------*/ 

//
#include <iostream> 
#include <cstdio>
#include <iomanip> 
using namespace std; 
int main()      
{
	int a,b,c;

//	scanf("%d %d %d",&a,&b,&c);
//	printf("%8d %8d %8d",a,b,c);
//	printf("\n123456789012345678901234567890123456789");
	
	cin >> a >> b >> c;
	cout<<setfill(' ')<<setw(8)<<a<<" ";
	cout<<setfill(' ')<<setw(8)<<b<<" "; 
	cout<<setfill(' ')<<setw(8)<<c<<" ";
	cout<<"\n123456789012345678901234567890";
	return 0;
}  
