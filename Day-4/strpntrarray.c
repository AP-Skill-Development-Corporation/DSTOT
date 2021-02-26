//~ Structures ande pointer array

#include<stdio.h>
struct employee {
	int empid;
	char empname[90];
};

int main()
{
	int n,i;
	printf("Enter Size: ");
	scanf("%d",&n);
	struct employee e[n];
	struct employee *pe;
	pe = e;
	for(i=0;i<n;i++)
	{
		printf("Enter Employee Id: ");
		scanf("%d",&(pe+i)->empid);
		printf("Enter Employee Name: ");
		scanf("%s",(pe+i)->empname);
		//~ pe++;
	}
	//~ pe = e;
	printf("============================\n");
	printf("Employee Details are: \n");
	for(i=0;i<n;i++)
	{
		printf("Employee Id is: %d\nEmployee Name is: %s\n",(pe+i)->empid,(pe+i)->empname);
		//~ pe++;
	}
	return 0;
}
