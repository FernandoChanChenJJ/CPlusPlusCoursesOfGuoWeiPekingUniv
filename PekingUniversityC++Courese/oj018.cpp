#include<iostream>  
using namespace std; 
int main()      
{
	int n,m,min,max;
	cin >> n;
	cin >> m;
	max = m;
	min = m;
	for(int i=1;i<n;i++){
		cin >> m;
		if(m>max)
			max = m;
		if(m < min)
			min = m;	
	}
	cout << max-min ;
	return 0;
}  
