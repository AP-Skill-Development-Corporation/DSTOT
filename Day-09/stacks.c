// push pop display
#include<stdio.h>
#include<stdlib.h>
int Top=-1;
#define size 3
int a[size];
void push();
void pop();
void display();
int main()
{
	int choice;
	while(1)
	{
		printf("1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			       break;
			case 2:pop();
				   break;
			case 3:display();
			       break;
			case 4:exit(0);
			
			default:printf("Invalid choice\n");
		}
	}
	return 0;
}
void push()
{
	if(Top==size-1)
	{
		printf("Stack is full");
	}
	else
	{
		int b;
		printf("Enter the element to store in stack: ");
		scanf("%d",&b);
		Top=Top+1;
		a[Top]=b;
	}
}
void pop()
{
	if (Top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Deleted element from stack %d",a[Top]);
		Top=Top-1;
	}
}
void display()
{
	if (Top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Elements in the stack are: ");
		int i;
		for (i=Top;i>=0;--i)
		{
			printf("%d\t",a[i]);
		}
	}
}
