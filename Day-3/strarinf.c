//~ Structures and arrays in functions

#include<stdio.h>
struct employee {
	int empid;
	char empname[90];
};

void readst(struct employee t[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		scanf("%s",t[i].empname);
		scanf("%d",&t[i].empid);
	}
}

void printst(struct employee t[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
		printf("%s",t[i].empname);
		printf("%d",t[i].empid);
	}
}

int main()
{
	int n;
	printf("Enter How many records you need to read from user: ");
	scanf("%d",&n);
	struct employee e[n];
	readst(e,n);
	printst(e,n);
	return 0;
}
