#include <iostream> 
#include <cstring>
#define N 100000
int num[N];
char a[N];
char s[N]; 
using namespace std;
int main()      
{
	memset(num,0,sizeof(num));	//将num的全部元素置为0 
	cin >> s;   //存放输入的字符数组
	int n = strlen(s);
	int cnt;
	int pos = 0;   //记录a中有效元素的下标 
	for(int i=0;i<n;++i)  //遍历输入s的所有元素 
	{
		cnt = 0;
		for(int j=0;j<=pos;j++)  //预设a的有效元素个数为n 
		{
			if(s[i] == a[j])		//a中已包含s[i]	
			{
				if(num[j] > 1)
					break;
				num[j]++;
				cnt++;		
			}
		}
		//判断是否没有找到？
		if(cnt == 0)   //在a中s[i]没有找到 
		{
			a[pos] = s[i];
			++pos;
			++num[pos];			
		} 
	} 
	int k=0;
	for(;k<=pos;++k)
	{
		if(num[pos] == 1)
		{
			 cout << a[pos];
			 cout << "there";
			 return 0;
		}				
	}
	if(k >= pos)
		cout << "no";
	cout << "here";
	return 0;
}  
