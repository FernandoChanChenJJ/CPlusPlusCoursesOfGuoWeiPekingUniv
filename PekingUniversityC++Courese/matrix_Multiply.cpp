//����˷� 
#include <iostream> 
using namespace std;
#define ROW 9
#define COL 9
int a[ROW][COL];
int b[ROW][COL];
int c[ROW][COL]; 
int main()      
{
	int m, n, p, q;
	//�������a 
	cin >> m >> n;
	for(int i=1;i<=m;++i)      //�к����±��1��ʼ 
	{
		for(int j=1;j<=n;++j)
		{
			cin >> a[i][j];
		}
	}
	//�������b
	cin >> p >> q; 
	for(int i=1;i<=p;++i)      //�к����±��1��ʼ 
	{
		for(int j=1;j<=q;++j)
		{
			cin >> b[i][j];
		}
	}
	//�������c=a*b
	for(int i=1;i<=m;++i)
	{
		for(int j=1;j<=q;++j)
		{
			c[i][j] = 0;
			for(int k=1;k<=n;++k)
			{
				c[i][j] += a[i][k]*b[k][j];
			}
			cout << c[i][j] << " ";	
		}
		cout << endl;
	} 
	return 0;
}  
