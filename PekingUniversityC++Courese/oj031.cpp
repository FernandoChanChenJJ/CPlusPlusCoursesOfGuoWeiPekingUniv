#include <iostream>  
using namespace std; 
const int MX = 10010;
bool flag[MX];
int main()      
{
	int L, M, cnt = 0, begin, end;
	cin >> L >> M;
	for(int i=0;i<MX;i++)
		flag[i] = true;
	for(int i=0;i<M;i++)
	{
		cin >> begin >> end;
		for(int j=begin;j<=end;j++)
		{
			if(flag[j])
			{
				cnt++;
				flag[j] = false;
			}
		}
	}
	cout << L+1-cnt;
	return 0;
}  
