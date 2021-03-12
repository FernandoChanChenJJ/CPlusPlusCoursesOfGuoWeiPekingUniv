#include <iostream> 
using namespace std; 
int main()      
{
	int year;
	cin >> year;
	if(year <= 0 || year != (int)year)
	{
		cout << "Illegal year." <<endl;
		return 0;
	}
	if((year > 1949) && (year - 1949)%10 == 0 )
	{
		cout << "country build tenth year." << endl;
	}
	else if((year > 1921) && !(year - 1921)%10)
	{
		cout << "party build tenth year." << endl;
	}
	if((year%400 == 0)||(year%4==0 && year%100 != 0))
	{
		cout << "leap year." << endl;
	}
	else
	{
		cout << "not leap year." << endl;
	}
	return 0;
}  
