#include <iostream> 
using namespace std;
int swap1(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;	
} 
int swap2(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;		
}
int swap3(int x, int y)
{
	x = x^y;
	y = x^y;
	x = x^y;	
}
int main()      
{
	int a[] = {1,2};
	swap1(a[0],a[1]);
	cout << a[0] <<" " << a[1] << endl; 
	return 0;
}  
