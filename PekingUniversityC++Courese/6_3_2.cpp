#include <iostream> 
#include <cmath>
using namespace std;
#define EPS 1e-6
//一：使用math库的实现 
//double distance(int x1, int y1, int x2, int y2)
//{
//	double d;
//	d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
//	return d;	
//} 
//二:Newton's iterat
double my_sqrt(double a)
{
	double x = a;
	while((x+a/x)/2-x > EPS)
	{
		x = (x+a/x)/2;	
	}
	return x;		
} 
double distance(int x1, int y1, int x2, int y2)
{
	double d;
	d = my_sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	return d;	
}  
int main()      
{
	int x1, x2, y1, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double d1, d2, d3;
	d1 = distance(x1, y1, x2, y2);
	d2 = distance(x1, y1, x3, y3);
	d3 = distance(x2, y2, x3, y3);
	//if((d1 + d2 > d3) && (d2 + d3 > d1) && (d1 + d3 > d2))  //3边构成triangle的充要条件 
	cout << d1 << " " << d2 << " " << d3 << endl;
	return 0;
}  
