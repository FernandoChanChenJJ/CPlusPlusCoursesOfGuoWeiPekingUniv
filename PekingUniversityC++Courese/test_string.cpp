#include <iostream> 
#include <string> 
using namespace std; 
int main()      
{
	string s = "1o3";
	for(int i=0;i<s.size();i++)
	{
		if(s.at(i) >= '0' && s.at(i) <= '9')
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}	
	}
	
	return 0;
}  
