#include <iostream> 
#include <cstring> 
using namespace std;
int main()      
{
	char szName[200] = "";
	memset(szName,'a',10);
	cout << szName << endl; 
	
	int a[100];
	memset(a,0,sizeof(a));
	for(int i=0;i<10;++i)
		cout << a[i] << " ";
	return 0;
}  
