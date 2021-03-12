#include <iostream>  
#include <cmath>
using namespace std; 
int main()      
{
	//int k=8;
	double P,k=8;
	P = (pow(1+sqrt(2),k)-pow(1-sqrt(2),k))/sqrt(2)/2 ;
	//cout << P;
	printf("%.6f",P);
	cout << endl << int(round(P));
	return 0;
}  
