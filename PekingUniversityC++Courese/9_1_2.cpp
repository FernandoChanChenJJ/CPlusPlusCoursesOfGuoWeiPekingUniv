#include <iostream>
using namespace std;
int main()
{
	int **pp;       //指向指针的指针 
	int *p;
	int n = 1234;
	p = &n;
	pp  = &p;
	cout << *(*pp) << endl;
	return 0;
} 
