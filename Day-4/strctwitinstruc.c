//~ Structure within a structure

#include<stdio.h>
struct employee {
	int empid;
	char empname[90];
	struct student{
		char addr[90];
		int pincode;
	}s;
};

int main()
{
	struct employee e;
	printf("Enter employee name: ");
	scanf("%s",e.empname);
	printf("Enter employee id: ");
	scanf("%d",&e.empid);
	printf("Enter employee address: ");
	scanf("%s",e.s.addr);
	printf("=======================");
	printf("\nEmployee Details is: ");
	printf("Employee Name is: %s\nEmployee Id is: %d\nEmployee Address is: %s",e.empname,e.empid,e.s.addr);
	return 0;
}

