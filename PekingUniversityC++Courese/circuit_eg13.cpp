#include <iostream> 
using namespace std; 
int main()      
{
	//fabonacci
	int a1 =1, a2 = 1, a3;
	int k;  
	cin >> k;
	if(k==1 || k==2)
		cout << 1;
	else
	{
		for(int i=0;i<k-2;i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;	
	} 
	cout << a2;	
	}	
	return 0;
}  
