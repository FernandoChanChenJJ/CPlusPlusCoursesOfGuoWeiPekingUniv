#include <iostream> 
using namespace std; 
int main()      
{   //��λ������� 
//	int a = ~21;
//	unsigned b = ~21;
//	cout <<a << "," << b << "," <<hex << a <<" ," <<b;

	//���������
	int n1 =15;
	short n2 = 15;
	unsigned short n3 = 15;
	n1 <<= 15; 
	cout << "n1=" << hex << n1 << dec << endl;
	return 0;
}  
