#include<iostream> 
#include <cmath> 
using namespace std; 
int main()      
{
	int L = 22, R = 23;
	int n;
	for(int i=L; i <= R; i++ )
	{
		n = int(log10(i)) + 1;
		cout << n<< ",";
	}
	return 0;
}  
