#include <iostream> 
#include <cstring>
#define N 100000
int num[N];
char a[N];
char s[N]; 
using namespace std;
int main()      
{
	memset(num,0,sizeof(num));	//��num��ȫ��Ԫ����Ϊ0 
	cin >> s;   //���������ַ�����
	int n = strlen(s);
	int cnt;
	int pos = 0;   //��¼a����ЧԪ�ص��±� 
	for(int i=0;i<n;++i)  //��������s������Ԫ�� 
	{
		cnt = 0;
		for(int j=0;j<=pos;j++)  //Ԥ��a����ЧԪ�ظ���Ϊn 
		{
			if(s[i] == a[j])		//a���Ѱ���s[i]	
			{
				if(num[j] > 1)
					break;
				num[j]++;
				cnt++;		
			}
		}
		//�ж��Ƿ�û���ҵ���
		if(cnt == 0)   //��a��s[i]û���ҵ� 
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
