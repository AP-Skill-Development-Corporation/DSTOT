#include <stdio.h>
int findele(int arr[],int size,int i,int s)
{
	if (i>size)
		return -1;
	else if (arr[i]==s)
		return i;
	else 
		return findele(arr,size,i+1,s);
	return i;
}
int main(int argc, char **argv)
{
	int size,pos=-1,i,key;
	printf("Enter size of array:-");
	scanf("%d",&size);
	int arr[size];
	for (i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter any Value to Search in Array:-- ");
	scanf("%d",&key);
	pos=findele(arr,size,0,key);
	if(pos>=0)
		printf("%d is found at %d position",key,pos);
	else
		printf("%d is not found",key);
	return 0;
}

