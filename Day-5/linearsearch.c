#include <stdio.h>
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
	int size,key,pos=-1,i;
	printf("Enter Size of Array:--");
	scanf("%d",&size);
	int arr[size];
	readarray(arr,size);
	printf("Enter Search element :--");
	scanf("%d",&key);
	for(i=0;i<size;i++)
	{
		if (arr[i]==key)
		{
			pos=i;
			break;
		}
	}
	if (pos!=-1)
		printf("%d is found at %d position",key,pos);
	else
		printf("%d is not found",key);
	return 0;
}

