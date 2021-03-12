//使用数组来取代复杂的分支，输入数字，输出星期几为例 
#include<iostream>  
#include <string>	//使用string必须包含此头文件 
using namespace std; 
string weekdays[] = {
"Monday","Tuesday","Wednesday","Thursday",
		"Friday","Saturday","Sunday" }; 
int main()      
{
	int n;
	cin >> n;
	if( n > 7 || n < 1)
		cout << "Illegal";
	else
		cout << weekdays[n-1]; 
	return 0;
}  
