#include <iostream>
using namespace std;
int gcd(int a, int b)
{
//	if(a < b)
//	{
//		int tmp;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int r = a % b;
	if(a % b == 0)            //ȡ������ a%b�����a<b,��ȡ��a
	{
		return b;
	}
	else
	{
		return gcd(b,a % b);
	}
	
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout << gcd(x,y);	
	return 0;
} 
