//implemention of queue using link list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL,*newnode;
void insert();
void delete();
void display();
main()
{
	int ch;
	while(1)
	{
		printf("\n1-Insertion\n2-Deletion\n3-Display\n4-Exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
		        case 2:delete();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			       break;
			default:printf("wrong chice\n");
		}
	}
}
void insert()
{
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter value\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=NULL;
	if(rear==NULL)
	{
		front=newnode;
		rear=newnode;
	}
	
	
		rear->next=newnode;
		rear=newnode;
	
}
void delete()
{
	if(rear==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	front=front->next;
}

void display()
{
	struct node *temp;
	temp=front;
	if(temp==NULL)
	{
		printf("no elements in queue\n");
		return;
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}

	

		
