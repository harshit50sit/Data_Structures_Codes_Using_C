//using link list sort,count and traversing
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*current,*newnode,*start,*prev,*after;
void insert();
void display();
void count();
void sort();
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
		printf("\n1-insertion\n2-display\n3-count\n4-sorting\n5-exit(0)\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:display();
			       break;
			case 3:count();
			       break;
		        case 4:sort();
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
	printf("enter value\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=NULL;
	current->next=newnode;
	current=newnode;
	
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
	printf("total nodes=%d\n",c);
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
void sort()

{
	struct node *p,*q;
	p=start;
	q=start;
	int temp;
	for(p=start;p->next!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(p->data>q->data)
			{
				temp=p->data;
				p->data=q->data;
				q->data=temp;
			}
		}
	}
}
				

	





