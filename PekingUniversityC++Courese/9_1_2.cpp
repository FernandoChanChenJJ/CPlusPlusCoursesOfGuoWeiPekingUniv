#include <iostream>
using namespace std;
int main()
{
	int **pp;       //ָ��ָ���ָ�� 
	int *p;
	int n = 1234;
	p = &n;
	pp  = &p;
	cout << *(*pp) << endl;
	return 0;
} 
