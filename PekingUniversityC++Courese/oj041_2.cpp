#include <iostream> 
#include <string>
using namespace std;
int main()      
{
	string s;  //store input str
	cin >> s;
	string a;  //��������״γ��ֵ��ַ��б� 
	string del_from_a;
	int n = s.size();
	for(int i=0;i<n;++i)
	{
		int pos = a.find(s[i]);
		if( pos == a.npos)    //a��û�ҵ�s[i] 
		{
			if(del_from_a.find(s[i]) == a.npos)   //del_from_a��û���ҵ�s[i],a��û��ɾ����s[i] 
				a.push_back(s[i]);
		}	
		else       //a���ҵ���s[i]������s[i]�Ѿ������˲�ֹһ�� 
		{
			a.erase(pos,1);	     //��a��ɾ�����ֳ���һ�ε�s[i] 
			del_from_a.push_back(s[i]);     //����ɾ����Ԫ�ط���del_from_a�� 
		}	
	} 
	if(a[0] != 0)
		cout << a[0] << endl;
	else
		cout << "no";	
	return 0;
}  
/*
ago:�˷����������⣬��b����3��ʱ����Ȼ���¼��a�С�
now:�����������Ѵ洢string��ֻ�е��ַ���û�б�ɾ��������a��û��ʱ����ӽ�a�С� 
*/
