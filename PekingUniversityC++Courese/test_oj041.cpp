#include <iostream> 
using namespace std;
int main()      
{
	char a = 'd';
	string s;
//	s.append(to_string(a));
	s.push_back(a);
	s.push_back('a');
	s.push_back('b');
	cout << s[0] << endl;
	cout << s[1] << endl;
	cout << s[2] << endl;
	return 0;
}  
