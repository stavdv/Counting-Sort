#include<stdio.h>
#include <string.h>

void countiogSort(int a[],int n)
{
	int i;
	int maxValue = a[0];
	int minValue = a[0];

	for(i=0;i<n;i++)
	{
		if(maxValue < a[i])
			maxValue = a[i];
		else if(minValue > a[i])
			minValue = a[i];
	}
	
	int lenC_array= maxValue-minValue+1;
	int C_array[lenC_array];
	memset(C_array, 0, lenC_array*sizeof(int));
	
	for(i=0;i<n;i++)
		C_array[a[i]-minValue]++;
	
	int j=0;
	for(i=0;i<lenC_array;i++)
	{
		int counter = C_array[i];
		while(counter > 0)
		{
			a[j] = i+minValue;
			counter--; 
			j++;
		}		
	}

}

void printArr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

int main()
{
	int array[] = {6,0,3,4,2,3};
	int length = sizeof(array)/sizeof(int);
	countiogSort(array,length);
	printArr(array,length);
	return 0;
}
