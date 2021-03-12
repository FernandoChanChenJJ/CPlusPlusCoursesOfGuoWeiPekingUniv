#include<iostream>  
using namespace std; 
int main()      
{
	freopen("c:\\tmp\\test.txt","r",stdin); //freopen重定向输入，不用每次输入同样的测试数据 
	//此后，所有的输入都来自文件 c:\tmp\test.txt 
	int n,max=0;
	//while(scanf("%d",&n) != EOF){
	while(cin >> n){
		if(n>max)
			max = n;
	}
	printf("%d",max);
	return 0;
}  
