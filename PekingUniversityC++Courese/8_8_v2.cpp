#include<iostream>  
using namespace std; 
void Reverse(int *p, int size)
{
	int tmp;
	for(int i = 0; i < size/2; i++)
	{
		tmp = p[i];
		p[i] = p[size-1-i];
		p[size-1-i] = tmp;
	}
}
int main()      
{
//	int a[5] = {1,2,3,4,5};
//	Reverse(a,sizeof(a)/sizeof(int));
//	for(int i = 0; i < 5; i++)
//		cout << *(a+i) << ",";
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	Reverse(a[1],4);
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << a[i][j] << " ";
		}
	}
	Reverse(a[1],6);
	cout << endl;						
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << a[i][j] << " ";
		}
	}
	return 0;
}  
