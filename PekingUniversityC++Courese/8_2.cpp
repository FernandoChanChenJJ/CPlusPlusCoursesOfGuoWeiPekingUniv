#include<iostream>  
using namespace std; 
int main()      
{
	char ch1 = 'A';
	char * pc = &ch1;
	* pc = 'B';
	char ch2 = * pc;
	pc = & ch2;
	* pc = 'D';
	cout << ch1 << " " << ch2 << " "  << endl;
	cout <<  pc; 
	return 0;
}  
