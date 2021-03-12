#include <iostream> 
using namespace std; 
int main()      
{
	char a, b, c;
	scanf("%c%c%c",&a,&b,&c);
	printf("%c%c%c",a,b,c); 
	return 0;
}  
/*
scanf不会跳过空格 
经测试发现中文字符占2个字节，逗号占2个字节 
*/ 

