#include<iostream>  
using namespace std; 
int main()      
{
	int n,sum=0,Max=0,Min=100;
	cin>>n;
	while(n)
	{	
		sum += n;
		if(n > Max)
		{
			Max = n;
		}
		if(n < Min)
		{
			Min = n;
		}
		cin >>n;
	}
	cout<<Max<<" "<< Min<<" "<<sum<<endl;
	return 0;
}  
