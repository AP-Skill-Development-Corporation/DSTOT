#include <stdio.h>
void swap(int x,int y);
void swapbyadd(int* p,int* q)
{
	int temp;
	printf("in swapbyadd fun Before Swapping value of a is %d\n",*p);
	printf("in swapbyadd fun Before Swapping value of b is %d\n",*q);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("in swapbyadd fun After Swapping value of a is %d\n",*p);
	printf("in swapbyadd fun After Swapping value of b is %d\n",*q);
}
int main()
{
	int a,b;
	int *x,*y;
	printf("Enter Value for variable a:-- ");
	scanf("%d",&a);
	printf("Enter Value for variable b:-- ");
	scanf("%d",&b);
	x=&a;
	y=&b;
	printf("in main Before Swapping value of a is %d\n",a);
	printf("in main Before Swapping value of b is %d\n",b);
	printf("Calling Function  by value \n");
	swap(a,b);
	printf("in main After Swapping value of a is %d\n",a);
	printf("in main After Swapping value of b is %d\n",b);
	printf("Calling Function  by address \n");
	swapbyadd(x,y);
	printf("in main After Swapping value of a is %d\n",a);
	printf("in main After Swapping value of b is %d\n",b);
	return 0;
}
void swap(int x,int y)
{
	int temp;
	printf("in swap fun Before Swapping value of a is %d\n",x);
	printf("in swap fun Before Swapping value of b is %d\n",y);
	temp=x;
	x=y;
	y=temp;
	printf("in swap fun After Swapping value of a is %d\n",x);
	printf("in swap fun After Swapping value of b is %d\n",y);
}
