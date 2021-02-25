//~ Structures and Arrays

#include<stdio.h>
struct employee {
	int empid;
	char empname[90];
};

int main()
{
	int n,i;
	printf("Enter how many records you want to insert: ");
	scanf("%d",&n);
	struct employee e[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d Employee Id: ",i+1);
		scanf("%d",&e[i].empid);
		printf("Enter %d Employee name: ",i+1);
		scanf("%s",e[i].empname);
	}
	printf("++++++++++++++++++++++++++++\n");
	printf("Entered Employee Details are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d Employee Id is: %d\n",(i+1),e[i].empid);
		printf("%d Employee Name is: %s\n",(i+1),e[i].empname);
	}
	return 0;
}
