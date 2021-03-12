#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long int N,a;
	scanf("%lld",&N);
	while(N!=1){
		if(N%2==1){
			a=N*3+1;
			printf("%lld*3+1=%lld\n",N,a);
		}
		else{
			a=N/2;
			printf("%lld/2=%lld\n",N,N/2);
		}
		N=a;
	}
	printf("End");
	return 0; 
}
