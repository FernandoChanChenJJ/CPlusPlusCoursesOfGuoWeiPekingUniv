#include<iostream> 
#include <string>
#include <algorithm> 
using namespace std; 
int main()      
{
	string s = "hello";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    cout<<s.substr(0,1);
	return 0;
}  
