#include <iostream> 
#include <string>
using namespace std;
int main()      
{
	string s;  //store input str
	cin >> s;
	string a;  //用来存放首次出现的字符列表 
	string del_from_a;
	int n = s.size();
	for(int i=0;i<n;++i)
	{
		int pos = a.find(s[i]);
		if( pos == a.npos)    //a中没找到s[i] 
		{
			if(del_from_a.find(s[i]) == a.npos)   //del_from_a中没有找到s[i],a中没有删除过s[i] 
				a.push_back(s[i]);
		}	
		else       //a中找到了s[i]，表明s[i]已经出现了不止一次 
		{
			a.erase(pos,1);	     //从a中删掉出现超过一次的s[i] 
			del_from_a.push_back(s[i]);     //并将删掉的元素放入del_from_a中 
		}	
	} 
	if(a[0] != 0)
		cout << a[0] << endl;
	else
		cout << "no";	
	return 0;
}  
/*
ago:此方法存在问题，当b出现3次时，依然会记录到a中。
now:新增了垃圾堆存储string，只有当字符从没有被删除过且在a中没有时会添加进a中。 
*/
