#include <iostream>  
using namespace std; 
int a[5][5];
int row_max[5];
int row[5];
int col[5];
int main()      
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			cin >> a[i][j];
	}
	for(int i =0;i < 5; i++)
	{
		row_max[i] = a[i][0];
		row[i] = i;
		col[i] = 0;
		for(int j=1;j<5;j++)
		{
			if(a[i][j] > row_max[i])
			{
				row_max[i] = a[i][j];
				col[i] = j;		
			}			
		}	
	}         
	for(int k=0;k<5;k++)
	{
		for(int i=0;i<5;i++)
		{
			if(a[row[i]][col[k]] > a[i][col[k]])
			{
				row[i] = -1;
			}
		}
	}
	int cnt =0;
	for(int k=0;k<5;k++)
	{
		if(row[k] != -1)
		{
			cout << row[k] << " " << col[k] << " " << a[row[k]][col[k]] << endl;
			cnt++;
		}
	}
	if(cnt == 0)
	{
		cout << "not found";
	}
	return 0;
}  
