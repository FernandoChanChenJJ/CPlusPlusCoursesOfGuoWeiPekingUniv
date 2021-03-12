#include <iostream> 
#include <cstring>
using namespace std;
int main()      
{  //字符串函数示例  
	char s1[100] = "12345";
	char s2[100] = "abcdefg";
	char s3[100] = "ABCDE";
	strncat(s1,s2,3);	//s1="12345abc"
	cout << "1) " << s1 << endl;
	strncpy(s1,s3,3);
	cout << "2) " << s1 <<endl;    //s1 = "ABC45abc"  拷贝过来的字符会直接放在s1的前3个位置
	strncpy(s2,s3,6);  //s2="ABCDE"
	cout << "3) " << s2 <<endl;	
	cout << "4) " << strncmp(s1,s3,3) <<endl;         //0
	char *p = strchr(s1,'B');    //s1 = "ABC45abc"   输出"BC45abc"
	//s1中查找字符'B',若存在则返回指向第一次出现位置的指针，否则返回NULL 
	if(p)
		cout << "5) " << p - s1 << "," << *p << endl;
//		cout << "5) " << p - s1 << "," << p << endl;	 
	else
		cout << "5) Not Found" << endl; 
	p = strstr(s1,"45a");
	if(p)
		cout <<"6) " << p-s1  << "," << p << endl;     //3,45abc  //p为char * 都可以交给cout输出 
	else
		cout << "6) Not Found" << endl;
//以下演示strtok的用法：
	cout << "\nstrtok usage demo:" << endl;
	char str[] = "- This, a sample string, OK.";
	//下面从str中逐个抽取被" ,.-"这几个字符分隔的子串
	p = strtok(str," ,.-");
	while( p != NULL)
	{
		cout << p << endl;
		p = strtok(NULL," ,.-");
	}	
	return 0;
}  
