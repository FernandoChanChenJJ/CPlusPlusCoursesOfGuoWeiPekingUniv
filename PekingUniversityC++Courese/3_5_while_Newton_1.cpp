#include<iostream>  
using namespace std;
#define EPS 0.001 
int main()      
{
	double a;
	cin>>a;
	if(a>=0){
		double x=a/2,lastX=x+1+EPS;
		while(x-lastX > EPS || lastX-x >EPS){
			lastX = x;
			x= (x+a/x)/2;
		}
		cout<<x;
	}
	else
		cout<<"It can't be negative.";
	return 0;
}  
