#include<iostream>  
using namespace std; 
int main()      
{
	int n,m;
//	while(scanf("%d%d",&n,&m) != EOF){    //ctrl+z can end program 
//		printf("%d\n",m+n);
//	}
	
	while(scanf("%d%d",&n,&m) == 2){    //scanf func will return the num of paras was read correctly
		printf("%d\n",m+n);
	}
	return 0;
}  
