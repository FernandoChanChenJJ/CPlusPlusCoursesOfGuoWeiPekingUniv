#include<iostream>  
using namespace std;
int a1[] = {1,2,3,4};
void setZero(int a[],int n)
{
	for(int i = 0; i < n; i++)
		a[i] = 0; 
 } 
int main()      
{
	setZero(a1,sizeof(a1)/sizeof(int));
	for(int i = 0; i < sizeof(a1)/sizeof(int); i++)
		cout << a1[i] <<" ";          //0 0 0 0 ˵��������Ϊ��������ʱ�������ǿ������������� 
	return 0;
}  
