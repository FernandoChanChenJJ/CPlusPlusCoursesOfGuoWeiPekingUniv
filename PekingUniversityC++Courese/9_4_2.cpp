#include <iostream> 
#include <cstring>
using namespace std;
int main()      
{  //�ַ�������ʾ��  
	char s1[100] = "12345";
	char s2[100] = "abcdefg";
	char s3[100] = "ABCDE";
	strncat(s1,s2,3);	//s1="12345abc"
	cout << "1) " << s1 << endl;
	strncpy(s1,s3,3);
	cout << "2) " << s1 <<endl;    //s1 = "ABC45abc"  �����������ַ���ֱ�ӷ���s1��ǰ3��λ��
	strncpy(s2,s3,6);  //s2="ABCDE"
	cout << "3) " << s2 <<endl;	
	cout << "4) " << strncmp(s1,s3,3) <<endl;         //0
	char *p = strchr(s1,'B');    //s1 = "ABC45abc"   ���"BC45abc"
	//s1�в����ַ�'B',�������򷵻�ָ���һ�γ���λ�õ�ָ�룬���򷵻�NULL 
	if(p)
		cout << "5) " << p - s1 << "," << *p << endl;
//		cout << "5) " << p - s1 << "," << p << endl;	 
	else
		cout << "5) Not Found" << endl; 
	p = strstr(s1,"45a");
	if(p)
		cout <<"6) " << p-s1  << "," << p << endl;     //3,45abc  //pΪchar * �����Խ���cout��� 
	else
		cout << "6) Not Found" << endl;
//������ʾstrtok���÷���
	cout << "\nstrtok usage demo:" << endl;
	char str[] = "- This, a sample string, OK.";
	//�����str�������ȡ��" ,.-"�⼸���ַ��ָ����Ӵ�
	p = strtok(str," ,.-");
	while( p != NULL)
	{
		cout << p << endl;
		p = strtok(NULL," ,.-");
	}	
	return 0;
}  
