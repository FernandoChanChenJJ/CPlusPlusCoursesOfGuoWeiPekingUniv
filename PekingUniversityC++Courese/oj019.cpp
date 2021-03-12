#include<iostream>  
using namespace std; 
int main()      
{
	int n , goldNum=0 , silverNum=0 , bronNum=0 ,sum;
	int g,s,b; 
	cin >> n;
	for(int i=0; i < n ; i++){
		cin >> g >> s >> b;
		goldNum += g;
		silverNum += s;
		bronNum += b;
	}
	sum =  goldNum + silverNum + bronNum;
	cout << goldNum << " " << silverNum << " " << bronNum << " " << sum;
	return 0;
}  
