//~ Structures by using pointers

#include<stdio.h>
struct employee {
	int empid;
	char empname[90];
};

int main()
{
	struct employee e;
	struct employee *pe;
	pe=&e;
	printf("Enter Employee Id: ");
	scanf("%d",&pe->empid);
	printf("Enter Employee Name: ");
	scanf("%s",pe->empname);
	printf("=======================\n");
	printf("Structure Employee Details: ");
	printf("\nEmployee Name is: %s\nEmployee Id is: %d\n",e.empname,e.empid);
	printf("\nStructure Pointer Details: ");
	printf("\nEmployee Name is: %s\nEmployee Id is: %d\n",pe->empname,pe->empid);
	return 0;
}
