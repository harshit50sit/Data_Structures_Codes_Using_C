//implemention of link list by dyanimically
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*current,*newnode,*start;
void insert();
void display();
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
		printf("\n1-insertion\n2-display\n3-exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:display();
			       break;
			case 3:exit(0);
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
	while(start!=NULL)
	{
		printf("%d-->",start->data);
		start=start->next;
	}
}



