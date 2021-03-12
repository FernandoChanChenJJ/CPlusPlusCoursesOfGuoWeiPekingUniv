#include <iostream> 
using namespace std; 
int main()      
{
	//处理无结束的标记的OJ题目输入
	/* 输入若干个整数，输出其中的最大值 
	  sample input 
	  2 3 4 5 6 787 54532 12 
	  sample output
	  54532 
	*/
	int a, max = 0;
	while(scanf("%d",&a) != EOF)
	{
		if(max < a)
			max = a;	
	} 
	printf("%d",max);
	return 0;
}  
