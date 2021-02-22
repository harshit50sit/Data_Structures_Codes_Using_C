//implemention of link list by dyanimically and insert at beginneng
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*current,*newnode,*start,*prev,*after;
void insert();
void display();
void beg();
void spc();
void count();
void delbeg();
void delspc();
void delend();
main()
{
	int ch;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=0;
	newnode->next=NULL;
        start=newnode;
	current=newnode;
	while(1)
	{
		printf("\n1-insertion\n2-insert at beginning\n3-display\n4-count the node\n5-insert at specific function\n6-delete from begining\n7-delete from specific pos\n8-delete from end\n9-exit(0)\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:beg();
			       break;
			case 3:display();
			       break;
			case 4:count();
			       break;
			case 5:spc();
			       break;
		        case 6:delbeg();
			       break;
			case 7:delspc();
			       break;
			case 8:delend();
			       break;
			case 9:exit(0);
			default:printf("wrong choice\n");
	
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
	current->next=newnode;
	current=newnode;
	
}
void beg()
{
	int x;
	struct node *temp;
	temp=start;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("entyer value\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=temp->next;
	temp->next=newnode;
}
void spc()
{
	struct node *temp;
	temp=start;
	int x,pos,i;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter position for inserting\n");
	scanf("%d",&pos);
	for(i=0;i<pos;i++)
	{
		temp=temp->next;
	}
	printf("enter value\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=temp->next;
	temp->next=newnode;
}
void count()
{
	struct node *temp;
	temp=start;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	printf("total nodes are=%d\n",c);
}
void display()
{
	struct node *temp;
	temp=start->next;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("null\n");
}
void delbeg()
{
	struct node *temp;
	temp=start;
	int i=0;
	while(i<2)
	{
		temp=temp->next;
		i++;
	}
	start->next=temp;
}
void delspc()
{
	struct node *temp;
	int pos,i;
	temp=start;
	printf("enter position\n");
	scanf("%d",&pos);
	for(i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
}
void delend()
{
	struct node *temp1;
	temp1=start;
	while(temp1->next!=current)
	{
		temp1=temp1->next;
	}
	temp1->next=NULL;
	free(current);
	
	current=temp1;



}





