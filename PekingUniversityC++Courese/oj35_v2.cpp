#include <iostream>                   //失败的方法，数据太大inf 
#include <cmath> 
using namespace std;
#define N 1000 
double Pell(double k)
{
	if(k == 1 || k == 2)
	{
		return k;
	}
	else 
	{
		return (long long int)((pow(1+sqrt(2),k)-pow(1-sqrt(2),k))/sqrt(2)/2)%32767;	
	}
}
int main()      
{
	//freopen("C:\\tmp\\in.txt","r",stdin);
	int n;
	double k[N];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> k[i];
	}
	for(int i = 0; i < n; i++)
	{
		//cout << (Pell(k[i]))%32767 << endl;
		cout << (Pell(k[i]))<< endl;
	}
	return 0;
}  
