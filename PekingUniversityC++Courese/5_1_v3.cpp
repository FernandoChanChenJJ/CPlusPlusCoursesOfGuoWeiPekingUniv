#include <iostream> 
using namespace std; 
#define N 100
int a[N];    //����һ�㲻Ҫ������main���棬�����Ǵ����� 
int main()      
{
	for(int i=0;i<N;++i)
	{
		cin >> a[N-1-i];
	}
	for(int i=0;i<N;++i)
	{
		cout << a[i] << " ";
	}
	return 0;
}  
