#include <iostream> 
#include <cstring>
using namespace std;
int Strstr(char s1[], char s2[])
{
	if(strcmp(s2,"") == 0)
		return 0;
	int n1 = strlen(s1);		
	int n2 = strlen(s2);
	int cnt = 0;
	for(int i = 0; i < n1; ++i)
	{
		for(int j=0;j < n2;++j)
		{
			if(s1[i+j] == s2[j])
				++cnt;
			else
				break;
		}
		if(cnt == n2)
			return i;
	}
	return -1;
}
int main()      
{
	char s1[100],s2[100];
//	cin >> s1 >> s2;
	strcpy(s1,"abf");
	strcpy(s2 , "");
	cout << Strstr(s1, s2) << endl;
	return 0;
}  
