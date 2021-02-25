//~ Returning structure by using arrays in format of functions 


#include<stdio.h>
struct employee {
	int empid;
	char empname[90];
};

struct employee readst()
{
	struct employee st;
	printf("Enter employee id: ");
	scanf("%d",&st.empid);
	printf("Enter employee name: ");
	scanf("%s",st.empname);
	return st;
}

struct employee printst(struct employee st)
{
	printf("employee name is: %s\n",st.empname);
	printf("employee id is: %d\n",st.empid);
	return st;
}

int main()
{
	int n,i;
	printf("Enter how many records to insert: ");
	scanf("%d",&n);
	struct employee e[n];
	for(i=0;i<n;i++)
	{
		e[i] = readst();
	}
	printf("==================\n");
	for(i=0;i<n;i++)
	{
		printst(e[i]);
	}
	return 0;
}
