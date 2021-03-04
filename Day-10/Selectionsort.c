#include<stdio.h>
int selectionsort(int a[],int n);
int main()
{
    int n,i,a[100];
    printf("size of array \n");
	scanf("%d",&n);
	printf("enter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    selectionsort(a,n);
    printf("after sorting array becomes \n");
    for(i=0;i<n;i++)
    {
	   printf("%d \n",a[i]);
    }
    return 0;
}
int selectionsort(int a[],int n)
{
	int j,i,temp;
	for(i=0;i<n-1;i++)
    {
	 for(j=i+1;j<n;j++)
	 {
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	 }
   }
return 0;
}
