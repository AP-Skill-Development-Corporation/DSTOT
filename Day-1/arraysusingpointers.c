#include <stdio.h>
void printarray(int *q,int t)
{
	int i;
	printf("\nPrinting values of array\n");
	for(i=0;i<t;i++)
	{
		printf("value=%d pos=%d add=%p\n",*(q+i),i,(q+i));
	}
}
void readarray(int* p,int x)
{
	int i;
	printf("reading values into array\n");
	for(i=0;i<x;i++)
	{
		printf("Enter value for %d position",i);
		scanf("%d",(p+i));
	}
	printf("Completed reading values into array");
	printarray(p,x);
}

int main()
{
	int size;
	printf("Enter no.of to hold in an array :-- \n");
	scanf("%d",&size);
	int arr[size];
	readarray(arr,size);
	//printarray(arr,size);
	return 0;
}
