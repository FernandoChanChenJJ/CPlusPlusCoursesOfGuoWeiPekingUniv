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
	{   //ÿһ�е����ֵ�洢�ڽṹ������P[5]�� 
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
	//��P[5]��ȡ��ÿһ��Ԫ�أ��õ����±�P[i].y,Ȼ���ڸ����бȽ�a[x][y]������Ԫ�صĵĴ�С��ϵ
	for(int k=0;k<5;k++)
	{
		int col = P[k].y;
		int row = P[k].x;
		int cnt = 0;
		for(int i=0;i<5;i++)    //��P[i].y�У���0-4�е�aֵ�ж� 
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
