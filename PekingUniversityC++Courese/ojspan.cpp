#include<iostream>  
using namespace std; 
int main()      
{
	int N,maxV,minV,n;
	cin >> N >> n;
	maxV = n;
	minV = n;
	while(n)
	{
		if( n > maxV)	
			maxV = n;
		if( n < minV)
			minV = n;
		cin >> n;
	} 
	cout << maxV-minV; 
	return 0;
}  
