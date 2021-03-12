#include<iostream>  
using namespace std; 
int main()      
{
	//freopen("c:\\tmp\\oj023.txt","r",stdin);
	int n ,k = 0,max = 0,SBP/*ÊÕËõÑ¹*/,DBP/*ÊæÕÅÑ¹*/;
	cin >> n;
	for(int i = 0; i < n ; i++)
	{
		cin >> SBP  >> DBP; 
		if(( SBP >= 90 && SBP <= 140)&&( DBP >= 60 && DBP <= 90))
		{
			k++;
			if( k > max)
				max = k;	
		} 
		else
			k = 0;
	}
	cout << max;
	return 0;
}  
