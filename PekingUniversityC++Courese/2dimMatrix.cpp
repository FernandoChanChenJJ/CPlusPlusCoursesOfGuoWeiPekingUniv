#include<iostream>  
#define ROW 2
#define COL 3
int a[ROW][COL];
using namespace std; 
int main()      
{
	for (int i = 0; i < ROW ; i++)
	{
		for (int j = 0; j < COL ; j++)
		{
			cout << a[i][j] << " ";
		}
		cout <<endl;
	}
	return 0;
}  
