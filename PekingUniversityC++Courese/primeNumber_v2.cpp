#include<iostream>    //筛法求素数 
#define N 1000001    //求N-1以内的素数，包括判断N-1 
#include <time.h> 
bool isPrime[N]; 
using namespace std;  
int main()      
{
	clock_t start,finish;
	double totaltime;
	start = clock();
	int cnt = 0;
	std::fill(isPrime,isPrime+N,1);   //元素全设置为1
	for( int i = 2; i < N; i++ )
	{
		if(isPrime[i])
		{
			for(int j = i*2; j < N ; j += i)
			{
				if(isPrime[j])
					isPrime[j] = false;	
			}	
		}
	}
	for(int k = 2; k < N ; k++)
	{
		if(isPrime[k])
		{
			cnt++;
			cout << k << " ";
		}		
	}
	//cout << "\nisPrime[100]=" << isPrime[100] << endl; 
	cout << endl << N-1 << "以内的素数个数：" << cnt <<endl;
	finish = clock();
	totaltime = (double)(finish - start)/CLOCKS_PER_SEC;
	cout<<"\n此程序的运行时间为"<<totaltime<<"秒！"<<endl; 
	return 0;
}  
