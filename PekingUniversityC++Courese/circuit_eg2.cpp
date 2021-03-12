#include <iostream> 
using namespace std; 
int main()      
{
	int n, mx;
	cin >> mx;      //¼«¾¡ÆæÃî 
	while(cin >> n)
	{
		if(n > mx)
			mx = n;
	}
	cout << mx << endl;
	return 0;
}  
