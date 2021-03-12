#include<iostream>  
using namespace std; 
int main()      
{
	int * pn;
	char * pc;
	char c = 0x65;
	//pn = pc;
	//pn = & c;
	pn = (int *) &c;
	cout << c << endl;
	cout << pn << endl;
	cout << *pn << endl<<endl;
	int n = * pn;
	
	cout << pn << endl;
	cout << *pn << endl;
	cout << n << endl;
	* pn = 0x12345678;
	return 0;
}  
