#include <iostream> 
using namespace std; 
int main()      
{
//	int i;
//	for(i = 0; i < 26;++i)
//	{
//		cout << char('a'+i);
//	}
	
//	int i = 5; 
//	for(int i = 0; i < 26; ++i)
//	{
//		printf("%c",char('a'+i));
//	}
//	cout << endl;
//	for(int i = 0; i < 26; i+=2)    //循环控制变量并非每次只能增加1 
//	{
//		printf("%c",char('A'+i));
//	}
//	cout << endl;
//	cout << i;

//	for(int i=15,j=0;i > j; i-= 2,j+= 3)
//		cout << i << "," << j << endl;

//	int n;
//	cin >> n;
//	for(int i = 1;i <= n; i++)    //枚举法 
//	{
//		if(n % i == 0)
//		{
//			cout << i << " ";
//		}
//	}

//	int n, m, cnt = 0;
//	cin >> n >> m;
//	for(int i = 1; i < n; ++i)
//	{
//		for(int j = i+1; j <= n; ++j)
//		{
//			if(m%(i+j) == 0)
//			{
//				cnt++;
//				cout << "i=" << i << ",j=" << j << endl;
//			}
//		}
//	} 
//	cout << cnt;

//	int sum = 0, maxN = 0, minN = 200, n;
//	cin >> n;
//	while(n)
//	{
//		if(n > maxN) 
//			maxN = n;
//		if(n < minN)
//			minN = n;
//		sum += n;
//		cin >> n;	
//	}
//	cout << maxN << " " << minN << " " << sum << endl;

//	const int N = 10000;
//	int n = 1;
//	do
//	{
//		cout << n << " ";
//		n *= 2;	
//	}while(n < N);

//	int n, m;
//	printf("%d",scanf("%d%d",&n,&m)); //scanf的返回值为成功读入的变量个数 
	// 12 56 0; 40 a 1;a 40 0; 
	
//	int n , m;
//	while(scanf("%d%d",&n,&m) != EOF){ 
//		//scanf的返回值为EOF(-1),则表示输入结束 
//		printf("%d\n",n+m); 
//	} 

//	int n , m;
//	while(cin >> n >> m)   //cin成功读入所有的参数后，返回true，否则返回false 
//	{
//		printf("%d\n",n+m);
//	 } 

	//处理无结束的标记的OJ题目输入
	/* 输入若干个整数，输出其中的最大值 
	  sample input 
	  2 3 4 5 6 787 54532 12 
	  sample output
	  54532 
	*/
	freopen("c:\\tmp\\test.txt","r",stdin);
	int maxN = 0, n;
	//int cnt = 0;
	while(cin >> n);
	{
		if(n > maxN)
		{
			maxN = n;
			//cnt++;
		}
	} 
	cout << maxN;
	//cout << cnt;
	return 0;
}  
/*
freopen("c:\\tmp\\test.txt","r",stdin); //freopen重定向输入，不用每次输入同样的测试数据 
	//此后，所有的输入都来自文件 c:\tmp\test.txt 
	int n,max=0;
	//while(scanf("%d",&n) != EOF){
	while(cin >> n){
		if(n>max)
			max = n;
	}
	printf("%d",max);
*/
