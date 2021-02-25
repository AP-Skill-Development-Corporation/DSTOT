//~ Basic Structure with employee details

#include<stdio.h>
struct employee{
	int empid;
	char empname[90]; 
};

int main()
{
	struct employee e;
	printf("Enter Employee Name: ");
	scanf("%s",e.empname);
	printf("\nEnter Employee Id: ");
	scanf("%d",&e.empid);
	printf("------------------------\nEntered Employee Details is: \n");
	printf("Employee Id: %d\nEmployee Name: %s",e.empid,e.empname);	
	return 0;
}
