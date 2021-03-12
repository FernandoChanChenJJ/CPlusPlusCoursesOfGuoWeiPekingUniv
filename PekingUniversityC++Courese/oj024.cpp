#include <iostream> 
#include <string>
#include <algorithm> 
using namespace std; 
int main()      
{
	//const int N = 10;
	int n;
	cin >> n;
	if( n==0 ){
		cout << 0;
		return 0;
	}
	if( n < 0)
	{
		n = -n;
		cout << "-";	
	}		
	string s = to_string(n);
	reverse(s.begin(),s.end());
	while( s.substr(0,1) == "0"){
		s = s.erase(0,1); 
	} 
	cout << s;
	return 0;
}  
