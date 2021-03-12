#include <iostream> 
using namespace std;
int Fac(int n)
{
	if(n <2)
		return 1;
	else
		return Fac(n-1)*n;
 } 
int main()      
{
	int a;
	while(cin >> a)
	{
		cout << Fac(a) << endl;	
	}
	return 0;
}  
