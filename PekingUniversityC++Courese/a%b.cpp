#include <iostream>  
using namespace std; 
int main()      
{
	int a, b;
	while(cin >> a >> b)
	{		
		cout << a%b<< endl;
		cin >> a >> b;
	}
	return 0;
}  
//test result:    if(a<b) then a%b ==a;
//6 9
//6
//2 3
//2
//2 5
//2
//2 4
//2
//2 10
//2
//3 6
//3
//4 8
//4
//8 4
//0
