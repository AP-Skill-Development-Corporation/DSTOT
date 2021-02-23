#include <stdio.h>

int main()
{
	int a;
	int *p,**q;
	printf("Enter a value into Variable-:");
	scanf("%d",&a);
	p=&a;
	q=&p;
	printf("Address of a using pointer p :-- %p\n",p);
	printf("Value of a using pointer p :-- %d\n",*p);
	printf("Address of p using pointer q :-- %p\n",q);
	printf("Value of p= Address of a using pointer q :-- %p\n",*q);
	printf("Value of a using pointer q :-- %d\n",**q);
	
	return 0;
}

