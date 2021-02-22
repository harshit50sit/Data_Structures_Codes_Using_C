//using link list reverse the data
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*current,*newnode,*start,*prev,*after;
void insert();
void display();
void reverse();
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
		printf("\n1-insertion\n2-display\n3-reverse\n4-exit(0)\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:display();
			       break;
			case 3:reverse();
			       break;
			case 4:exit(0);
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
void reverse()
{
	struct node *p,*q;
	p=start;
	q=start;
	while(q->next!=NULL)
	{
		q->data=p->next->data;
		p=p->next;
		q=q->next;
	}
}


				

	





