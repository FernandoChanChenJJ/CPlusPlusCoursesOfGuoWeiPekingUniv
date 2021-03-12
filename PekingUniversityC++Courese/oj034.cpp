#include <iostream>  
using namespace std;
//int a[110][110];
const int MX = 110;     //便于修改，避免直接使用数字参数 
short int at[MX][MX];       //元素都小于1000 
int main()      
{
	int n, m;
	cin >> n >> m;
	for(int i=0;i<n;i++)      //由矩阵的下标从1开始，可以采取数组中下标从1开始的空间 
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
