#include <iostream>  
using namespace std;
const int MX = 110;
int a[MX];  
int main()      
{
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i] >= 0 && a[i] <= 18)	
		{
			c1++;
		}
		else if(a[i] >= 19 && a[i] <= 35)
		{
			c2++;
		}
		else if(a[i] >= 36 && a[i] <= 60)
		{
			c3++;
		}
		else
		{
			c4++;
		}
	}	
	printf("%.2f%\n",c1*100.00/n);
	printf("%.2f%\n",c2*100.00/n);
	printf("%.2f%\n",c3*100.00/n);
	printf("%.2f%\n",c4*100.00/n);	
	return 0;
}  
