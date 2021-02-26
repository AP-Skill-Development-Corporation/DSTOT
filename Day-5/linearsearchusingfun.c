#include <stdio.h>
int findelement(int *p,int q,int k)
{
	int i=0,pos=-1;
	for (i=0;i<q;i++)
	{
		if(*(p+i)==k){
			pos=i;
		}
	}
	if (pos!=-1)
		return pos;
	else
		return -1;
}
void readarray(int *p,int q)
{
	int i;
	for(i=0;i<q;i++)
	{
		printf("Enter Value for %d position",i);
		scanf("%d",(p+i));
	}
}
int main()
{
	int size,key,pos;
	printf("Enter Size of Array:--");
	scanf("%d",&size);
	int arr[size];
	readarray(arr,size);
	printf("Enter Search element :--");
	scanf("%d",&key);
	pos=findelement(arr,size,key);
	if (pos!=-1)
		printf("%d is found at %d position",key,pos);
	else
		printf("%d is not found",key);
	return 0;
}
