#include <iostream> 
using namespace std; 
int main()      
{
	//�����޽����ı�ǵ�OJ��Ŀ����
	/* �������ɸ�������������е����ֵ 
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
