#include <iostream>  
#include <string>
using namespace std; 
int main()      
{
	int n,total,valid;
	double ratio_HAART,ratio_new;
	string res="";
	cin >> n;
	cin >> total >> valid;
	ratio_HAART = (double)valid/total;
	for(int i=0 ; i < n-1 ; i++){
		cin >> total >> valid;
		ratio_new = (double)valid/total;
		if(ratio_new-ratio_HAART > 0.05 )
		{
			res += "better\n";
		}
		else if(ratio_HAART - ratio_new > 0.05)
		{
			res += "worse\n";
		}
		else
		{
			res += "same\n";
		}
	}
	cout << res;
	return 0;
}  
