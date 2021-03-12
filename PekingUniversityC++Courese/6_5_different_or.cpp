#include<iostream>  
using namespace std; 
int main()      
{
	//异或运算的特点是：如果a^b=c,那么就有c^a=b,c^b=a
	//可用于最简单的加密解密，以下就是一个简单的例子：
	//用字符串存储数字更好，毕竟long long型也有范围 
	long long int a = 5201314, b = 2342354363, c;
	c = a ^ b;
	cout << "c=" <<c << " ,"; 
	cout << "c^a=" << (c^a) << " ,";
	cout << "c^b= " << (c^b) << "."; 
	return 0;
}  
