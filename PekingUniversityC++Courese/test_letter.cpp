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
//	for(int i = 0; i < 26; i+=2)    //ѭ�����Ʊ�������ÿ��ֻ������1 
//	{
//		printf("%c",char('A'+i));
//	}
//	cout << endl;
//	cout << i;

//	for(int i=15,j=0;i > j; i-= 2,j+= 3)
//		cout << i << "," << j << endl;

//	int n;
//	cin >> n;
//	for(int i = 1;i <= n; i++)    //ö�ٷ� 
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
//	printf("%d",scanf("%d%d",&n,&m)); //scanf�ķ���ֵΪ�ɹ�����ı������� 
	// 12 56 0; 40 a 1;a 40 0; 
	
//	int n , m;
//	while(scanf("%d%d",&n,&m) != EOF){ 
//		//scanf�ķ���ֵΪEOF(-1),���ʾ������� 
//		printf("%d\n",n+m); 
//	} 

//	int n , m;
//	while(cin >> n >> m)   //cin�ɹ��������еĲ����󣬷���true�����򷵻�false 
//	{
//		printf("%d\n",n+m);
//	 } 

	//�����޽����ı�ǵ�OJ��Ŀ����
	/* �������ɸ�������������е����ֵ 
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
freopen("c:\\tmp\\test.txt","r",stdin); //freopen�ض������룬����ÿ������ͬ���Ĳ������� 
	//�˺����е����붼�����ļ� c:\tmp\test.txt 
	int n,max=0;
	//while(scanf("%d",&n) != EOF){
	while(cin >> n){
		if(n>max)
			max = n;
	}
	printf("%d",max);
*/
