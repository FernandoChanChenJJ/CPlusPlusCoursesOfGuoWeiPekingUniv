#include <iostream> 
using namespace std; 
int main()      
{
//	unsigned int n1 = 0xffffffff;
//	cout << n1 << endl;
//	unsigned int n2 = n1 + 3;
//	cout << n2 << endl; 

//	printf("%d\n",(2147483646 + 6)/2);
//	printf("%d",2147483646/2 + 6/2);

//	int a = 10;
//	int b = 3;
//	double d = a/b;
//	cout << d << endl;       //3
//	d = 5/2;
//	cout << d <<endl;       //2
//	d = 5/2.0;
//	cout << d <<endl;       //2.5
//	d = (double)a/b;        //3.333333
//	cout << d <<endl;

//	int n1, n2 = 5;
//	n2++;     //n2=6
//	++n2;     //n2=7
//	n1 = n2 ++;  //n1=7,n2=8
//	cout << n1 << "," << n2 << endl;
//	n1 = ++n2;     //n2=9,n1=9
//	cout << n1 << "," << n1 << endl;

//	int n = true, m = false;
//	printf("%d,%d",n,m);

//	int n1 = 4, n2 = 5, n3;
//	n3 = (n1 > n2);
//	cout << n3 << ",";    //0
//	n3 = (n1 < n2);       
//	cout << n3 << ",";    //1
//	n3 = (n1 == 4);
//	cout << n3 << ",";    //1
//	n3 = (n1 != 4);
//	cout << n3 << ",";    //0
//	n3 = (n1 == 5);
//	cout << n3;           //0
	
//	int n1 = 4, n2 = 5;
//	bool n3;
//	n3 = (n1 > n2);
//	cout << n3 << ",";    //0
//	n3 = (n1 < n2);       
//	cout << n3 << ",";    //1
//	n3 = (n1 == 4);
//	cout << n3 << ",";    //1
//	n3 = (n1 != 4);
//	cout << n3 << ",";    //0
//	n3 = (n1 == 5);
//	cout << n3;           //0

//	int n = 4;
//	bool t;
//	t = (n > 4 && n < 5);
//	cout << t << endl;    //0
//	t = (n >= 2 && n < 5);
//	cout << t << endl;    //1
//	t = (5 && 0);        //0
//	cout << t << endl;
//	t = (4 && 1);       //1
//	cout << t << endl;

//	int n = 4;
//	bool t;
//	t = (n > 4 || n < 5);
//	cout << t << endl;
//	t = (n <= 2 || n > 5);
//	cout << t << endl;

//	cout << !(4 < 5) << endl;     //0
//	cout << !5 << endl;           //0
//	cout << !0 << endl;           //1

	// && || 的短路求值 
//	int a = 0, b = 1;
//	bool n = (a++) && (b++);    //0
//	cout << a << "," << b << endl;   //1,1
//	n = a++ && b++;    //n=1,a=2,b=2
//	cout << a << "," << b << endl;
//	n = a++ || b++;    //n=1,a=3,b=2
//	cout << a << "," << b << endl;

	double f = 9.14;
	int n = (int)f;     //强制类型转换，n=9 
	f = n/2;         //f=4 
	double d = double(n)/2;     //4.5
	cout << n << "," << f << "," << d << endl;
	return 0;
}  
