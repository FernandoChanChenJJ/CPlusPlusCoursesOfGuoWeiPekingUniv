#include<iostream>  
using namespace std; 
int main()      
{
	int n7,n9;
	for(int i=1 ; i < 7; i++)
	{
		for(int j=0 ; j < 7; j++)
		{
			for(int k = 1; k < 7; k++)
			{
				n9 = i*9*9 + j*9 + k;
				n7 = k*7*7 + j*7 + i;
				if( n9 == n7 )
				{
					cout << n9 << endl;
					cout << k << j << i << endl;
					cout << i << j << k << endl;
				}
			}
		}
	}
	return 0;
}  
