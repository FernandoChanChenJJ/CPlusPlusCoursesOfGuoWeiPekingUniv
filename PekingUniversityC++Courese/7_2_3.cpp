#include <iostream> 
#include <cstring>
using namespace std;
void PrintSmall(char s1[], char s2[])
{
	if(strcmp(s1,s2) < 0)
		cout << s1;
	else
		cout <<s2;
}
int main()      
{
	char s1[30];
	char s2[40];
	char s3[100];
	strcpy(s1,"Hello");     //s1 = "Hello"
	strcpy(s2,s1);           //s2 = "Hello"
	cout << "1) " << s2 << endl;
	strcat(s1,",world");        //s1 = "Hello,world"
	cout << "2) " << s1 << endl; 
	cout << "3) "; 	PrintSmall("abc",s2); cout << endl;      //cout << s2 "Hello"
	cout << "4) "; 	PrintSmall("abc","aaa"); cout << endl;   //"aaa"
	int n = strlen(s2);              //n=5
	cout << "5) " << n << "," << strlen("abc") << endl;      //5,3
	strupr(s1);        //s1 = "HELLO,WORLD"
	cout << "6) " << s1 << endl;
	return 0;
}  
