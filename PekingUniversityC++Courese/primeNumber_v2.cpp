#include<iostream>    //ɸ�������� 
#define N 1000001    //��N-1���ڵ������������ж�N-1 
#include <time.h> 
bool isPrime[N]; 
using namespace std;  
int main()      
{
	clock_t start,finish;
	double totaltime;
	start = clock();
	int cnt = 0;
	std::fill(isPrime,isPrime+N,1);   //Ԫ��ȫ����Ϊ1
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
	cout << endl << N-1 << "���ڵ�����������" << cnt <<endl;
	finish = clock();
	totaltime = (double)(finish - start)/CLOCKS_PER_SEC;
	cout<<"\n�˳��������ʱ��Ϊ"<<totaltime<<"�룡"<<endl; 
	return 0;
}  
