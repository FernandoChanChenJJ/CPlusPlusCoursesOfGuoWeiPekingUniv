#include<iostream>  
using namespace std;
//ָ����Ϊ�����Ĳ��� 
void Swap(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main()      
{
	int m = 3, n = 4;
	cout << m << " " << n << endl;
	Swap( &m, &n);
	cout << m << " " << n << endl; 
	return 0;
}  
