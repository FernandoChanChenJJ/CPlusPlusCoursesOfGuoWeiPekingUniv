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
ע����������string�������洢ÿ�ε����룬����
����"string doesn't name a type"�ı��� 
�ٶȷ����ǰ�string���������������using namespace std;��ǰ�档
string ������Ϊ��std::string  
����Ҳ����ʹ��vector���洢�������㣬�����˷ѿռ䡣 
*/
