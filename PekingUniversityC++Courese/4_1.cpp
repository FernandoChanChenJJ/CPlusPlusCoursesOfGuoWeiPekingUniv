#include<iostream>  
using namespace std; 
int main()      
{
/*
例题:如果两个不同的正整数，他们的和是他们的积的因子，就称这两个数
为兄弟数，小的称为弟数，大的称为兄数。先后输入正整数n和m(n < m) , 请
在n至m这m-n+1个数中，找出一对兄弟数。如果找不到，就输出“No
Solution.”。如果能找到，就找出和最小的那一对；如果有多对兄弟数和相
同且都是最小，就找出弟数最小的那一对。
思路：枚举每一对不同的数，看看是不是兄弟数。用两个变量记录当前已
经找到的最佳兄弟数，如果发现更佳的，就重新记录。
*/ 
	int n,m,a,b;
	cin >> n >> m;
	a = b = m+1;
	for(int i=n ; i< m;i++)
	{
		if(i > (a+b)/2+1)
			break;        //就算找到兄弟数，和也比a+b大，不用找了,没有价值，节省时间 
		for(int j=i+1;j<=m;j++)
		{
			if((i*j)%(i+j)==0)
			{
				if(i+j < a+b){
					a = i;
					b = j;	
				}
				else if(i+j == a+b){
					if(i<a)
					{
						a = i;
						b = j;	
					}
				}
				
			}
		}
	}
	if( a == m+1)
		cout <<"No solution.";
	else
		cout << a << "," << b;
	return 0;
}  
