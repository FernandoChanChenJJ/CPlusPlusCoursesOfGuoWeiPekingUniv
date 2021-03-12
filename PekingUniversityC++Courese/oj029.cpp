#include <iostream>  
using namespace std; 
const int MX = 10;
int a[MX];
int main()      
{
	short int h = 30, H, cnt = 0;
	for(short int i=0;i<MX;i++)
	{
		cin >> a[i];
	}
	cin >> H;
	H += h;
	for(short int i=0;i<MX;i++)
	{
		if(a[i] <= H )
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}  
