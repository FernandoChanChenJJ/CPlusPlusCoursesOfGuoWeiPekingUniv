#include <iostream>
#include <string>  
using namespace std; 
int main()      
{
	int L, R;
	int cnt = 0;   //�˴��޸��ˣ��������ύ2021-2-25 
	string s; 
	cin >> L >> R; 
	for(int i = L; i <= R; i++)
	{
		s = to_string(i);
		int len = s.size(); 
		for(int j=0; j < len; j++)
		{
			if(s[j] == '2')
				cnt++;	
		}	
	} 
	cout << cnt; 
	return 0;
}  
