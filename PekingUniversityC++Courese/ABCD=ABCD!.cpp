#include <iostream>  
using namespace std;
//ABCDE = A!+B!+C!+D!+E!   //40585
int fac(int n)
{
	int s=1;
	for(int i=1;i<=n;i++)
	{
		s *= i;	
	}
	return s;
}
int main()      
{
	int A,B,C,D,E;
	for(int i=1;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			for(int k=0;k<=9;k++)
			{
				for(int m=0;m<=9;m++)
				{
					for(int n=0;n<=9;n++)
					{
						if(i*10000+j*1000+k*100+m*10+n == fac(i) + fac(j) + fac(k) + fac(m)	+fac(n))
						{
							cout << i<<j<<k<<m<<n<<endl;
							cout <<  fac(i) + fac(j) + fac(k) + fac(m)	+fac(n)<<endl;
						}	
					}
					
				}	
			}	
		} 
	} 
	return 0;
}    
//int main()
//{
//	cout << fac(10) << endl; 
//	return 0;
//}
