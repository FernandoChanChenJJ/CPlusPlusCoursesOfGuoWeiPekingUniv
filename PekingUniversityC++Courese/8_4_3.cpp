#include <iostream> 
using namespace std;
void reverse(int *p , int size)
//void reverse(int p[] , int size)
{
	int tmp, n = size/2;
	for(int i=0;i<n;++i)
	{
		tmp = p[size-1-i];
		p[size-1-i] = p[i];
		p[i] = tmp;		
	}	
}
int main()      
{
	//整形数组前后颠倒
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	reverse(a[1],4); 
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<4;++j)
		{
			cout << a[i][j] << " ";
		}	
		cout <<endl;
	}
	cout << "------------------" << endl;
	reverse(a[1],6);    //结果表明二维数组的确采用一维数组的方式连续来存储 
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<4;++j)
		{
			cout << a[i][j] << " ";
		}	
		cout <<endl;
	}
	return 0;
}  
