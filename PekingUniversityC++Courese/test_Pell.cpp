#include <iostream> 
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
		return (pow(1+sqrt(2),k)-pow(1-sqrt(2),k))/sqrt(2)/2;	
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
		cout << (Pell(k[i])) << endl;
	}
	return 0;
}  
