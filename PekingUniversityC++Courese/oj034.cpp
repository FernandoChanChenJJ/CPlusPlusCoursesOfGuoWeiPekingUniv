#include <iostream>  
using namespace std;
//int a[110][110];
const int MX = 110;     //�����޸ģ�����ֱ��ʹ�����ֲ��� 
short int at[MX][MX];       //Ԫ�ض�С��1000 
int main()      
{
	int n, m;
	cin >> n >> m;
	for(int i=0;i<n;i++)      //�ɾ�����±��1��ʼ�����Բ�ȡ�������±��1��ʼ�Ŀռ� 
	{
		for(int j=0;j<m;j++)
		{
			cin >> at[j][i];         //little trick
		//	at[j][i] = a[i][j]; 
		}                       
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << at[i][j] << " ";
		 } 
		 cout << endl;
	}
	return 0;
}  
