#include<iostream>  
using namespace std; 
int main()      
{
	int A, B, C;
	for(A = 1; A <= 9; A++)
	{
		for(B = 0; B <= 9; B++)
		{
			for(C = 0; C <= 9; C++)
			{
				if((A*10+A+B*10+B+C*10+C == A*100+B*10+C) && (A != B && A!= C && B != C) )
				{
					cout << A << "," << B << "," << C << endl;
				}
			}
		}
	} 
	return 0;
}  
