#include <iostream>
#include <cmath>
#define PI 3.141592653589793
#define EPS 1e-10
using namespace std;
int main()
{
	//to solve the equation: sin(x)/sin(3x)+sin(3x)/sin(5x)=1
	double alpha, delta = 0.000001;
	double A, B, C, x;
	for(alpha = 0.000; alpha <= 22.5; alpha += delta)
	{
		x = alpha/180*PI;
		A = sin(x);
		B = sin(3*x);
		C = sin(5*x);
		//if( fabs(A/B+B/C - 1) < EPS)
		if( fabs(A*C+B*B-B*C) < EPS)
		{
			cout << alpha << endl;
		}
	}
	cout << "End of search!";
	return 0;
}
