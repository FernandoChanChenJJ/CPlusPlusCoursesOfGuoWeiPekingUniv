#include <iostream>
#include <cstring>
using namespace std;
int Strstr(char s1[], char s2[])
{
	if(s2[0] == 0)
		return 0;
	for(int i = 0; s1[i]; i++)    //枚举比较起点 
	{
		int k = i, j = 0;
		for( ; s2[j]; k++,j++)
		{
			if(s1[k] != s2[j])
				break;	
		}	
		if(s2[j] == 0)
			return i;
	} 
	return -1; 
}
int main()
{
	char s1[30];
	char s2[30];
	cin.getline(s1,30);
	cin.getline(s2,30);
	cout << Strstr(s1,s2);
	return 0;
} 
