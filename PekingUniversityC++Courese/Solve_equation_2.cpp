#include <iostream>
#include <cmath>
#define PI 3.141592653589793
#define EPS 1e-7
using namespace std;
int main()
{
	//to solve the equation: sin(x)/sin(3x)+sin(3x)/sin(5x)=1
	double alpha=10;
	double A, B, C, x;
	x = alpha/PI;
	A = sin(x);
	B = sin(3*x);
	C = sin(5*x);	
	cout << "fabs(A*C+B*B-B*C)=" << fabs(A*C+B*B-B*C);
	return 0;
}
