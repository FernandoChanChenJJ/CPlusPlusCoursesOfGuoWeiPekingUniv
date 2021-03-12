#include <iostream> 
using namespace std;
int Fib(int n)
{
	if( n<= 2)
		return 1;
	else
		return Fib(n-1)+Fib(n-2);
}
int main()      
{
    int n;
    while(cin >> n)
    {
    	cout << Fib(n) << endl;
	}
	return 0;
}  
