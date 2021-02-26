#include <stdio.h>
int findele(int *p,int size,int *val)
{
	for (int i=0;i<size;i++)
		{
			if (*(p+i)==*val)
				return i;
		}
	return -1;
}
int main(int argc, char **argv)
{
	int size,pos=-1,i,key;
	int *p;
	printf("Enter size of array:-");
	scanf("%d",&size);
	int arr[size];
	for (i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter any Value to Search in Array:-- ");
	scanf("%d",&key);
	p=&key;
	pos=findele(arr,size,p);
	if(pos>=0)
		printf("%d is found at %d position",key,pos);
	else
		printf("%d is not found",key);
	return 0;
}

