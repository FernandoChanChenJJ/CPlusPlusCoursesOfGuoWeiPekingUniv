#include<iostream>  
using namespace std; 
void Swap(int a,int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "In Swap: a=" << a << " b= " << b << endl;
} 
void swap(int &a,int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "swap: a=" << a << " b= " << b << endl;
}
int main()      
{
	int a = 4, b = 5;
	//Swap(a,b);
	swap(a,b);     //���ô��ݣ��βθı���ʵ�ε�ֵ 
	cout << "After swaping : a= "<< a <<" b = " << b;
	return 0;
}  
