#include<iostream>  
using namespace std; 
int main()      
{
	//���������ص��ǣ����a^b=c,��ô����c^a=b,c^b=a
	//��������򵥵ļ��ܽ��ܣ����¾���һ���򵥵����ӣ�
	//���ַ����洢���ָ��ã��Ͼ�long long��Ҳ�з�Χ 
	long long int a = 5201314, b = 2342354363, c;
	c = a ^ b;
	cout << "c=" <<c << " ,"; 
	cout << "c^a=" << (c^a) << " ,";
	cout << "c^b= " << (c^b) << "."; 
	return 0;
}  
