//~ Returning a structure by using functions

#include<stdio.h>
struct employee {
	int empid;
	char empname[90];
};

struct employee readst()
{
	struct employee r;
	printf("Enter a name: ");
	scanf("%s",r.empname);
	printf("Enter id: ");
	scanf("%d",&r.empid);
	return r;
}

struct employee printst()
{
	struct employee r;
	printf("Entered name is: %s",r.empname);
	printf("\nEnter id is: %d",r.empid);
	return r;
}

int main()
{
	readst();
	printst();
	return 0;
}
