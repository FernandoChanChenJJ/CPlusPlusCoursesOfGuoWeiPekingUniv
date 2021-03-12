#include<iostream>  
using namespace std; 
int main()      
{
	int year,k=0;
	scanf("%d",&year);
	if(year < 0)
		printf("Illegal year!\n");
	else
	{
		printf("\nLegal year!\n");
		if(year > 1949 && (year-1949)%10 == 0){
			printf("Lucky year.\n");
			k++; 
		} 
		else if(year >1921 && (year-1921)%10 ==0){
			printf("Good year.\n");
			k++;			
		}
		if(year %4 ==0 && year%100 || year%400 ==0){
			printf("Leap year.\n");	
			k++;			
		}
		if(!k)
			printf("Common year.\n"); 
	} 
	return 0;
}  
