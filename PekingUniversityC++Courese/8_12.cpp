#include <iostream> 
#include <cstring> 
using namespace std; 
int main()      
{    //�ַ��������⺯�� 
	char s1[100] = "12345";
	char s2[100] = "abcdefg";
	char s3[100] = "ABCDE";
	strncat(s1,s2,3);   //s1="12345abc"
	cout << "1) " << s1 << endl;
	strncpy(s1,s3,3);  //s1="ABC45abc"
	cout << "2) " << s1 << endl;
	strncpy(s2,s3,6);   //s2="ABCDE" //s3���Ȳ���6�ͻ�ѽ�β��'\0'Ҳ������ȥ 
	cout << "3) " << s2 << endl;
	cout << "4) " << strncmp(s1,s3,3) << endl;     //0
	char *p = strchr(s1,'B');
	if( p )    //�ȼ���if( p != NULL)
		cout << "5) " << p - s1 << "," << *p << endl;
	else
		cout << "5) Not Found" << endl; 
	p = strstr( s1,"45a");
	if (p)
		cout << "6) " << p - s1 << "," << p << endl;
	else
		cout << "6) Not Found" << endl;
	//������ʾstrtok���÷���
	cout << "strtok usage demo:" << endl;
	char str[] = "- This, a sample string, OK.";
	//����Ҫ��str�������ȡ����",.-"�⼸���ַ��ָ����Ӵ�
	p = strtok(str," ,.-");  //ע��ֱ�Ϊ�ո񡢶��š���š���
	while (p != NULL){
		cout << p << endl;
		p = strtok(NULL," ,.-");   //�������ã���һ������������NULL 
	} 
	return 0;
}  
