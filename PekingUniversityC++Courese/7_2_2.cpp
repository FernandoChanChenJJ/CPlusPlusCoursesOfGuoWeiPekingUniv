#include <iostream> 
#include <cstring>
using namespace std;
int main()      
{
	char title[] = "Prison Break";  //title�����һ��Ԫ��Ϊ'\0'
	char hero[100] = "Michael Scofield";
	char prisonName[100];
	char response[100];
	cout << "What's the name of the prison in " << title << endl;
	cin >> prisonName;
	if( strcmp(prisonName, "Fox-River") == 0)     //�ַ����ȽϺ��� 
		cout << "Yeah! Do you love " << hero << endl; 
	else
	{
		//�ַ�������
		strcpy(response, "It seems you haven't watched it!\n");
		cout << response; 
	}
	title[0] = 't';
	title[3] = 0;     //title[3] = '\0';
	cout << title << endl;
	return 0;
}  