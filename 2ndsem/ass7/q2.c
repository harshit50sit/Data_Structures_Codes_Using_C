//implement double linklist insert at begning insert at specific 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next,*prev;
}*start=NULL,*current=NULL,*newnode;
void insert();
void display1();
void insertbeg();
void insertspc();
main()
{
	int ch;
	while(1)
	{
		printf("\n1-Insert\n2-Display from front\n3-Insert at beginning\n4-Insert at specific locatiion\n5-Exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
        	        	break;
			case 2:display1();
			       break;
			case 3:insertbeg();
			       break;
			case 4:insertspc();
			       break;

		        case 5:exit(0);
			default:printf("wrong choice\n");
		}
	}
}
	
void insert()
{
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=NULL;
	if(start==NULL)
	{
		newnode->prev=NULL;
		start=newnode;
		current=newnode;
	}
	else
	{
		newnode->prev=current;
		current->next=newnode;
		current=newnode;
	}

}
void insertbeg()
{
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->prev=NULL;
	start->prev=newnode;
	newnode->next=start;
	start=newnode;
}
void display1()
{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
void insertspc()
{
	int x,pos,i;
	struct node *temp;
	temp=start;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter position for inserting\n");
	scanf("%d",&pos);
	printf("enter data\n");
	scanf("%d",&x);
	newnode->data=x;
	for(i=2;i<pos;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	newnode->prev=temp;
	temp->next->prev=newnode;
}


