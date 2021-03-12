#include <iostream>  
#include <string>
const int MX = 110;
using namespace std; 
int fight(string s1, string s2)
{
	if(s1 == s2)
	{
		return 0;
	}
	else if((s1=="Rock" && s2=="Scissors")||(s1=="Paper" && s2=="Rock")||(s1=="Scissors" && s2=="Paper"))
	{
		return 1;	
	}
	else
	{
		return -1;
	}
} 
int main()      
{
	int n;
	string p1, p2 ; 
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> p1 >> p2;
		if(fight(p1,p2) ==0)
		{
			cout << "Tie" << endl;
		}
		else if(fight(p1,p2) ==1)
		{
			cout << "Player1" << endl;
		}
		else
		{
			cout << "Player2" << endl;	
		}
	}	 
	return 0;
}  

/*
注：本来想用string数组来存储每次的输入，但是
报了"string doesn't name a type"的报错。 
百度发现是把string数组的申明放在了using namespace std;的前面。
string 完整版为：std::string  
另外也可以使用vector来存储，更方便，不会浪费空间。 
*/
