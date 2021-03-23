#include<stdio.h>
#include<stdlib.h>
/* To Create the Structure Of the Linked List */
typedef struct node{
	int data;
	struct node *next;
}node;

node* createNode(int d);
void readAndPlace();
void displayLL();
void reverse();

node* root = NULL;

int main(){
	while(1){
		int choice;
		printf("\nChoose an option\n1.Creating a New Node\n2.Displaying the Linked List\n3.Reverse\n4.Break");
		scanf("%d",&choice);
		if(choice == 1){
			readAndPlace();
		}else if(choice ==2){
			displayLL();
		}else if(choice ==3){
			reverse();
		}else if(choice == 4){
			break;
		}
	}
	return 0;
}

// Create A Linked List Node -This function returns the node pointer

node* createNode(int d){
	node* n = malloc(sizeof(node));
	n->data = d;
	n->next = NULL;
	return n;
}

// To Reverse the Linked List
void reverse(){
	node *h,*p,*c;
	h = root;
	p = h;
	h = h->next;
	c = h;
	p->next = NULL;
	
	while(h!=NULL){
		h = h->next;
		c->next = p;
		p = c;
		c = h;
	}
	h = p;
	root = h;
	
	displayLL();
}
// to create and place the node in the right position
void readAndPlace(){
	int data;
	printf("Enter Node Value");
	scanf("%d",&data);
	node* n = createNode(data);
	if(root == NULL){
		root = n;
	}else{
		node* current = root;
		while(current->next!=NULL){
			current = current->next;
		}
		current->next = n;
	}        
}

void displayLL(){
	node* current = root;
	while(current != NULL)
	{
		if(current->next == NULL)
		{
			printf("%d ",current->data);
		}
		else
		{
			printf("%d ->",current->data);
		}
		
		current = current->next;
	}
}
