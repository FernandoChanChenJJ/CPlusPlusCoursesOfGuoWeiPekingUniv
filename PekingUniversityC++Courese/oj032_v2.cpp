#include <iostream>  
using namespace std; 
struct Point{
	int x;
	int y;
	int value;
};
Point P[5];
int a[5][5];
int main()      
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i=0;i<5;i++)
	{   //每一行的最大值存储在结构体数组P[5]中 
		P[i].x = i;
		P[i].y = 0;
		P[i].value = a[i][0];
		for(int j=1;j<5;j++)
		{
			if(a[i][j] > P[i].value)
			{
				P[i].y = j;
				P[i].value = a[i][j];
			}
		}
	}
	//从P[5]中取出每一个元素，得到列下标P[i].y,然后在该列中比较a[x][y]与其他元素的的大小关系
	for(int k=0;k<5;k++)
	{
		int col = P[k].y;
		int row = P[k].x;
		int cnt = 0;
		for(int i=0;i<5;i++)    //第P[i].y列，从0-4行的a值判断 
		{
			cnt++;
			if(a[i][col] < a[row][col])
			{
				cnt--;
				break;	
			} 
		}	
		if(cnt == 5)
		{
			cout << P[k].x +1 << " " << P[k].y +1 << " " << P[k].value << endl;
			return 0;
		}
	} 
	cout << "not found";
	return 0;
}  
