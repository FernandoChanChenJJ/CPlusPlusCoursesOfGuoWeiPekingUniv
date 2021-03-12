#include<iostream>  
using namespace std; 
int main()      
{
	int n,cnt,k=1;
	cin >> n;
	cout << 2 <<" "; 
	for(int i = 3;i <= n; i++)
	{
		cnt = 0;
		for(int j = 2;j <= i/2+1 ;j++)
		{
			if( i%j == 0)
			{
				cnt ++;
				break;	
			}		
		}
		if( cnt == 0 ){
			cout << i << " ";
			k++;			
		}
	}
	cout << "\n" << k; 
	return 0;
}  
