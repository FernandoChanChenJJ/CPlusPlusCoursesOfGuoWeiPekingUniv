#include<iostream>  
using namespace std; 
int main()      
{
	int n,m,cnt=0;
	cin >> n >>m;
	for(int k=1;k<n;k++)
	{
		for(int t=k+1;t<=n;t++)
		{
			if(m%(t+k )==0)
			{
				cout<<t<<" "<<k<<endl;
				cnt++; 
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}  
