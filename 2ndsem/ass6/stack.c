//impemention of stack using link list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL,*newnode;
//top=NULL;
void push();
void pop();
void display();
main()
{
	int ch;
	while(1)
	{
		printf("\n1-push\n2-pop\n3-display\n4-exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			default:printf("wrong choice\n");
		}
	}
}
void push()
{
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter value\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	if(top==NULL)
	{
		printf("stack is empty\n");
		return;
	}
	top=top->next;
}
void display()
{
	struct node *temp;
	temp=top;
	if(temp==NULL)
	{
		printf("no elements in stack\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("\n%d\n",temp->data);
			temp=temp->next;
		}
	}
}
			      

