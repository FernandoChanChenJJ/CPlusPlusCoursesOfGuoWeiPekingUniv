#include <stdio.h>
#include <stdlib.h>
using namespace std;
int MyCompare1(const void * elem1,const void * elem2)
{
	unsigned int *p1,*p2;
	p1 = (unsigned int *)elem1;
	p2 = (unsigned int *)elem2;
	return (*p1%10)-(*p2%10);          //��λ����С����elem1����elem2ǰ��Ļ�������ֵΪ���� 
}
int MyCompare2(const void * elem1,const void * elem2)
{
	unsigned int *p1,*p2;
	p1 = (unsigned int *)elem1;
	p2 = (unsigned int *)elem2;
	return *p1-*p2;          //��С����elem1����elem2ǰ��Ļ�������ֵΪ���� 
}
int MyCompare3(const void * elem1,const void * elem2)
{
	unsigned int *p1,*p2;
	p1 = (unsigned int *)elem1;
	p2 = (unsigned int *)elem2;
	return *p2-*p1;
}
#define NUM 5 
int main()
{
	unsigned int an[NUM]={1,4,56,23,190};
	qsort(an,NUM,sizeof(unsigned int),MyCompare3);
	for(int i=0;i<NUM;++i)
		printf("%d ",an[i]);
	return 0;
}
