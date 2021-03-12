#include <iostream> 
#include <cstring> 
using namespace std; 
int main()      
{    //字符串操作库函数 
	char s1[100] = "12345";
	char s2[100] = "abcdefg";
	char s3[100] = "ABCDE";
	strncat(s1,s2,3);   //s1="12345abc"
	cout << "1) " << s1 << endl;
	strncpy(s1,s3,3);  //s1="ABC45abc"
	cout << "2) " << s1 << endl;
	strncpy(s2,s3,6);   //s2="ABCDE" //s3长度不足6就会把结尾的'\0'也拷贝过去 
	cout << "3) " << s2 << endl;
	cout << "4) " << strncmp(s1,s3,3) << endl;     //0
	char *p = strchr(s1,'B');
	if( p )    //等价于if( p != NULL)
		cout << "5) " << p - s1 << "," << *p << endl;
	else
		cout << "5) Not Found" << endl; 
	p = strstr( s1,"45a");
	if (p)
		cout << "6) " << p - s1 << "," << p << endl;
	else
		cout << "6) Not Found" << endl;
	//以下演示strtok的用法：
	cout << "strtok usage demo:" << endl;
	char str[] = "- This, a sample string, OK.";
	//下面要从str中逐个抽取出被",.-"这几个字符分隔的子串
	p = strtok(str," ,.-");  //注意分别为空格、逗号、句号、杠
	while (p != NULL){
		cout << p << endl;
		p = strtok(NULL," ,.-");   //后续调用，第一个参数必须是NULL 
	} 
	return 0;
}  
