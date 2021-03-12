#include <iostream>  
#include <cstring>
#include <set> 
using namespace std; 
int main()      
{
	multiset<int> st;
	int a[10] = {1,14,12,13,7,13,21,19,8,8};
	for(int i = 0; i < 10; i++)
		st.insert(a[i]);   //插入的是a[i]的复制品,并默认排好序，从小到大 。复杂度为log(n) 
	multiset<int>::iterator i;  //迭代器，近似于前面的指针
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
	//返回最靠后的迭代器i，使得[begin(),i)中的元素都在13前面，复杂度log(n)
	cout << *i << endl;
	i = st.upper_bound(8);
	//返回最靠前的迭代器i，使得[i,end())中的元素都在8后面，复杂度为log(n) 
	cout << *i <<endl;
	st.erase(i);
	for(i = st.begin(); i != st.end(); i++)
		cout << *i << ",";
	return 0;
}  
