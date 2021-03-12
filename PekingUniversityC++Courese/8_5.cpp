#include<iostream>  
using namespace std; 
int main()      
{
	//指针运算的例子 
	int * p1, * p2;
	int n = 4;
	char * pc1, * pc2;
	p1 = (int *) 100;
	p2 = (int *) 200;
	cout <<"1) " << p2 - p1 <<endl;
	
	pc1 = (char *) p1;
	pc2 = (char *) p2;
	cout << "2) " << pc1 - pc2 << endl;	
//	cout << "*pc1=" << *pc1 << " *pc2= " << *pc2 << endl;
//	cout << "pc1=" << pc1 << " pc2= " << pc2 << endl;
//	cout << "*p1=" << *p1 << " *p2= " << *p2 << endl;
//	cout << "p1=" << p1 << " p2= " << p2 << endl;
	
	cout << "3) " << (p2 + n) - p1 << endl;
	int * p3 = p2 + n;
	cout << "4) " << p3 - p1 << endl;
	cout << "5) " << (pc2 - 10) - pc1 << endl;
	return 0;
}  
