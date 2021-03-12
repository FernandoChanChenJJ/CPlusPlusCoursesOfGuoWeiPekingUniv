#include <iostream>  
#include <cmath>
using namespace std;
const int MX = 110;
short int a[MX][MX];
short int b[MX][MX]; 
int main()      
{   //此程序可以用于差分法求解流场，迭代法;或者用于康威的生命游戏。 
	int n, m;
	cin >> n >> m;
	//用矩阵a接收输入的矩阵 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];	
		}
	} 
	//得到计算后像素矩阵b
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
				//上下中左右   
				b[i][j] = round((a[i][j-1]+a[i][j+1]+a[i][j]+a[i-1][j]+a[i+1][j])/5.0);	//对b的平均值取整 
			}
			cout << b[i][j] << " "; 
		}
		cout <<endl;
	}  
	return 0;
}  
