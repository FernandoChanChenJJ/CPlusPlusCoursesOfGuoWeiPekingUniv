#include <iostream> 
using namespace std;
int main()      
{
	int *p1, *p2;
	int n = 4;
	char * pc1, *pc2;
	p1 = (int *)100;
	p2 = (int *)200;
	cout << "1) " << p2 - p1 << endl;    //(200-100)/sizeof(int) =25
	pc1 = (char *) p1;
	pc2 = (char *) p2;
	cout << "2) " << pc1 - pc2 << endl;    //(100-200)/sizeof(char) =-100
	cout << "3) " << (p2 + n)-p1 <<endl;   //((200+4*4)-100)/sizeof(int)=29
	int * p3 = p2 + n;       //Ö¸ÏòµØÖ·200+4*4 
	cout << "4) " << p3 - p1 <<endl;    //29 
	cout << "5) "  << (pc2-10)-pc1 << endl;    //((200-10*1)-100)/1=90 
	return 0;
}  
