#include <iostream> 
#include <cmath> 
using namespace std; 
int main()      
{
	double a;
	while(cin >> a)
	{
		a = round(a);
		cout << a << endl;
	}
	return 0;
}  
/*
经过测试发现：round函数会返回距离输入的浮点数最近的整数。
但是要注意：
-0.5  ->  -1 
0.5   ->   1
与JS中*.5向+∞方向圆整不同。 
*/ 
