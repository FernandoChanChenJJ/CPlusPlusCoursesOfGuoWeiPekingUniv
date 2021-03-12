#include<iostream>  
using namespace std; 
//—°‘Ò≈≈–Ú 
void SelectionSort(int a[], int size)
{
	for(int i = 0; i < size-1; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			int tmpMin;
			if(a[j] < a[i])
			{
				tmpMin = a[j];
				a[j] = a[i];
				a[i] = tmpMin;
			}
		}	
	}	
} 
int main()      
{
	
	return 0;
}  
