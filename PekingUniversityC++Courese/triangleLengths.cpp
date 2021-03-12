#include<iostream>
#include <cmath>  
using namespace std;
double distance(double x1,double y1,double x2,double y2)
{
	double dis;
	dis = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return dis;	
} 
int main()      
{
	double x1, y1, x2, y2, x3, y3;
	double dis1, dis2, dis3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	dis1 = distance(x1, y1, x2, y2);
	dis2 = distance(x1, y1, x3, y3);
	dis3 = distance(x2, y2, x3, y3);
	cout << dis1 << " " << dis2 << " " << dis3 ; 
	return 0;
}  
