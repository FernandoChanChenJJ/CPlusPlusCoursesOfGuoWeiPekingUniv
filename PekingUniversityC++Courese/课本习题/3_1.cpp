#include <iostream> 
using namespace std; 
int main()      
{
	freopen("c:\\tmp\\test.txt","r",stdin);
	int a, b, c, t;
	while(cin >> a >> b >> c && (a!=0 || b!=0 || c!=0))
	{
		if(a < b )
		{
			t = a;
			a = b;
			b = t;	
		}
		if( a < c)
		{
			t = a;
			a = c;
			c = t;	
		}
		if( b < c)
		{
			t = b;
			b = c;
			c = t;	
		}
		cout << a << " " << b << " " << c << endl;
	}

	return 0;
}  
