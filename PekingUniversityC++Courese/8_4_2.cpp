#include <iostream> 
using namespace std;
//void reverse(int *p , int size)
void reverse(int p[] , int size)
{
	int tmp, n = size/2;
	for(int i=0;i<n;++i)
	{
		tmp = p[size-1-i];
		p[size-1-i] = p[i];
		p[i] = tmp;		
	}	
}
int main()      
{
	//��������ǰ��ߵ�
	int a[] = {1,2,3,4,5};
	reverse(a,sizeof(a)/sizeof(int)); 
	for(int i=0;i<5;++i)
//		cout << a[i] << " ";
		cout <<*(a+i) <<" ";    //�������д���ȼ� 
	return 0;
}  
