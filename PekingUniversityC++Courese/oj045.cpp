#include <iostream> 
using namespace std; 
int main()      
{
	char s[] = "Hello";
	char *p;
	for(int i=0,p=s+i;i<5;i++)
	{
		cout << *p;
	}
	return 0;
}  
