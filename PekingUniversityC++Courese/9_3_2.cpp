#include <iostream> 
using namespace std;
int main()      
{
	char szValue[20];
	itoa(27,szValue,10);
	cout << szValue <<endl;
	itoa(27,szValue,16);
	cout << szValue <<endl;
	return 0;
}  
