#include<iostream>  
using namespace std; 
int main()      
{
	char ch1 = 'A';
	char * pc = &ch1;
	char ch2 = * pc;
	ch2 = 'B';
	pc = & ch2;
	cout << ch1 << " " << ch2  << " " << *pc << endl;
	//* pc = 'B';
	//cout << ch1 << "  " << pc << endl; 
	return 0;
}  
