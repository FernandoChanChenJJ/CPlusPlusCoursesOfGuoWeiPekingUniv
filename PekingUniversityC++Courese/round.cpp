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
�������Է��֣�round�����᷵�ؾ�������ĸ����������������
����Ҫע�⣺
-0.5  ->  -1 
0.5   ->   1
��JS��*.5��+�޷���Բ����ͬ�� 
*/ 
