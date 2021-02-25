//~ Structure within a structure in arrays by using functions

#include<stdio.h>
struct employee {
	int empid;
	char empname[90];
	struct {
		int pincode;
		char stdaddr[90];
	}t;
};

struct employee readst()
{
	struct employee p;
	printf("Enter Employee Id: ");
	scanf("%d",&p.empid);
	printf("Enter Employee Name: ");
	scanf("%s",p.empname);
	printf("Enter Student Address: ");
	scanf("%s",p.t.stdaddr);
	printf("Enter Student Pincode: ");
	scanf("%d",&p.t.pincode);
	return p;
};
struct employee printst(struct employee y)
{
	printf("Employee and Student details are: ");
	printf("\nEmployee id is: %d\nEmployee Name is: %s",y.empid,y.empname);
	printf("\nStudent Address is: %s\nStudent Picode is: %d\n",y.t.stdaddr,y.t.pincode);
	return y;
};

int main()
{
	int n,i;
	printf("Enter How many records you need to store: ");
	scanf("%d",&n);
	struct employee e[n];
	for(i=0;i<n;i++)
	{
		e[i] = readst();
	}
	for(i=0;i<n;i++)
	{
		printst(e[i]);
	}
	return 0;
}
