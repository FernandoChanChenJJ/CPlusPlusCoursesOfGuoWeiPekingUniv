#include <iostream> 
using namespace std;  
int a1[4] = {4,15,6,9};
const int len = 4;
void SetToZero(int a[], int len)     //һά������Ϊ������ʵ�δ��ݵ������� 
{
	for(int i=0;i<len;++i)
	{
		a[i] = 0;
	}
}
int main()      
{
	SetToZero(a1,sizeof(a)/sizeof(int));
	for(int i=0;i<len;++i)
		cout << a[i] << ", ";
	return 0;
}  
