#include <stdio.h>
int findele(int arr[],int size,int val,int sindex,int eindex)
{
	int mid;
	if (sindex>eindex)
		return -1;
	mid=(sindex+eindex)/2;
	if (arr[mid]==val)
		return mid;
	else if (arr[mid]>val)
		return findele(arr,size,val,0,mid-1);
	else if (arr[mid]<val)
		return findele(arr,size,val,mid+1,size-1);
	return mid;
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
	pos=findele(arr,size,key,0,size-1);
	if(pos>=0)
		printf("%d is found at %d position",key,pos);
	else
		printf("%d is not found",key);
	return 0;
}

