#include<iostream>  
using namespace std; 
int main()      
{
	freopen("c:\\tmp\\test.txt","r",stdin); //freopen�ض������룬����ÿ������ͬ���Ĳ������� 
	//�˺����е����붼�����ļ� c:\tmp\test.txt 
	int n,max=0;
	//while(scanf("%d",&n) != EOF){
	while(cin >> n){
		if(n>max)
			max = n;
	}
	printf("%d",max);
	return 0;
}  
