#include<stdio.h>
#include<stdlib.h>
#define maxsize 4
void insert();
void display();
int front=-1, rear=-1;
int queue[maxsize];
int main()
{
	int choice;
	while(1)
	{
		printf("\n***********Main menu*********\n");
		printf("\n1.Insert\n2.Display\n3.Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();break;
			case 2:display();break;
			case 3:exit(0);break;
			default:printf("\nEnter a valid choice\n");
		}
	}
	return 0;
}
void insert()
{
	int item;
	printf("\nEnter the element: ");
	scanf("%d",&item);
	if(rear == maxsize-1)
	{
		printf("Overflow\n");
	}
	else if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
		queue[rear] = item;
		printf("\nValue inserted");
	}
	else
	{
		rear = rear+1;
		queue[rear] = item;
		printf("\nValue inserted");
	}
}
void display()
{
	int i;
	if(rear == -1)
	{
		printf("\nEmpty queue\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d\n",queue[i]);
		}
	}
}