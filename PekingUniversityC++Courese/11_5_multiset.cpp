#include <iostream>  
#include <cstring>
#include <set> 
using namespace std; 
int main()      
{
	multiset<int> st;
	int a[10] = {1,14,12,13,7,13,21,19,8,8};
	for(int i = 0; i < 10; i++)
		st.insert(a[i]);   //�������a[i]�ĸ���Ʒ,��Ĭ���ź��򣬴�С���� �����Ӷ�Ϊlog(n) 
	multiset<int>::iterator i;  //��������������ǰ���ָ��
	for(i = st.begin(); i != st.end(); ++i)
		cout << *i << ",";
	cout << endl;
	
	i = st.find(22);
	if( i == st.end()) 
			cout << "not found" << endl;
	st.insert(22);
	i = st.find(22);
	if( i == st.end()) 
		cout << "not found" << endl;
	else
		cout << "found:" << *i << endl;
	cout << endl;
	
	i = st.lower_bound(13);
	//�������ĵ�����i��ʹ��[begin(),i)�е�Ԫ�ض���13ǰ�棬���Ӷ�log(n)
	cout << *i << endl;
	i = st.upper_bound(8);
	//�����ǰ�ĵ�����i��ʹ��[i,end())�е�Ԫ�ض���8���棬���Ӷ�Ϊlog(n) 
	cout << *i <<endl;
	st.erase(i);
	for(i = st.begin(); i != st.end(); i++)
		cout << *i << ",";
	return 0;
}  
