#include <iostream>  
#include <cmath>
using namespace std;
const int MX = 110;
short int a[MX][MX];
short int b[MX][MX]; 
int main()      
{   //�˳���������ڲ�ַ����������������;�������ڿ�����������Ϸ�� 
	int n, m;
	cin >> n >> m;
	//�þ���a��������ľ��� 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];	
		}
	} 
	//�õ���������ؾ���b
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==0 || i==n-1 || j==0 || j==m-1)	
			{
				b[i][j] = a[i][j]; 
			}
			else
			{
				//����������   
				b[i][j] = round((a[i][j-1]+a[i][j+1]+a[i][j]+a[i-1][j]+a[i+1][j])/5.0);	//��b��ƽ��ֵȡ�� 
			}
			cout << b[i][j] << " "; 
		}
		cout <<endl;
	}  
	return 0;
}  
