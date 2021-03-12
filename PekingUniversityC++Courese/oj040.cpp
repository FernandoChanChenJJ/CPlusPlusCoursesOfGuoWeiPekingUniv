#include <iostream> 
#include <string>
//const int N = 265;
using namespace std; 
int main()      
{
	string s; 
	getline(cin,s);
	int size = s.size();
	int cnt = 0;
	for(int i=0;i<size;i++)
	{
		if(s.at(i) >= '0' && s.at(i) <= '9')
		{
			cnt++;
		}	
	}
	cout << cnt;
	return 0;
}  
