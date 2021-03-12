#include <iostream>
using namespace std;
const int MX = 110;
int a[MX];
int main()
{
	int N, m, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	for (int i = 0; i < N; i++)
	{
		if (m == a[i])
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
