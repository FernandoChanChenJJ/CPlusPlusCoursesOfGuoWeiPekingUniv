#include <iostream> 
using namespace std; 
int main()      
{
	//sizeof 
//	int n1 = 10;
//	double f;
//	char c;
//	printf("%d,%d,%d,%d,%d",sizeof(n1),sizeof(short),sizeof(double),sizeof(c),sizeof(long long)); 

	//����ת��
//	int k = 'a';
//	printf("%d",k);
//	
//	int n = 98;
//	char ck = n;
//	printf("\n%c",ck);
	
	int n1 = 1378;   //ʮ������Ϊ0x562 
	short n2;
	char c = 'a';
	double d1 = 7.809;
	double d2;
	n2 = c + 1;   //n2=98 
	printf("c=%c,n2=%d\n",c,n2);
	c = n1;    //0x62���뵽c�У�����λ�������Ų��� 
	printf("c=%c,n1=%d\n",c,n1);      //Ox62=98 
	n1 = d1;
	printf("n1=%d\n",n1);
	d2=n1;
//	const int N =2; 
//	printf("d2=%.Nf\n",d2);    //ָ��������С��λ�� 
	printf("d2=%.2f\n",d2);    //ָ��������С��λ��
	return 0;
}  
