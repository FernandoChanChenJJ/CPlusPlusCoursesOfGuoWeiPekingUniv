#include <iostream>
#define N 5    //ʹ�÷��ų��������޸� 
int a[N];      //����һ�㲻Ҫ������main�������棬�����Ǵ����� 
using namespace std; 
int main()      
{
    //const int N = 5;
	//int a[N];
	for(int i = 0 ; i < N ; i++ )
	{
		cin >> a[i];       //scanf("%d",&a[i]); 
	}
	for(int j = N-1 ; j >= 0 ; j-- )
	{
		cout << a[j]<<" ";
	}
	return 0;
}  
