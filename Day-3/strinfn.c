//~ Structures in functions

#include <stdio.h>
struct employee{
	int empid;
	char empname[90];
}e;

void readst()
{
	//~ struct employee y;
	printf("Enter Employee Name: ");
	scanf("%s",e.empname);
	printf("Enter Employee Id: ");
	scanf("%d",&e.empid);
}

void displayst()
{
	//~ struct employee t;
	printf("Employee Details are: \n");
	printf("Employee Name is: %s\nEmployee Id is: %d",e.empname,e.empid);
}

int main()
{
	readst();
	printf("=====================\n");
	displayst();
	return 0;
}
