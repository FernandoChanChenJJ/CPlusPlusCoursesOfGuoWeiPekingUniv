#include <iostream> 
#include <cstring>
const int N = 90;
char s[N];
using namespace std;
int main()      
{
	cin.getline(s,N-1);
	int i = 0;
	while(s[i]){
		if((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y') )
			s[i] += 1;
		else if(s[i] == 'z')
		{
			s[i] = 'a';
		}
		else if(s[i] == 'Z')
		{
			s[i] = 'A';
		}
		cout << s[i];
		++i;
	}
	return 0;
}  
