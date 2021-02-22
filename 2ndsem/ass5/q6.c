//implemention of queue by of link list 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*current,*newnode,*start,*prev,*after;
void push();
void display();
void pop();
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
		printf("\n1-push\n2-pop\n3-display\n4-exit(0)\n");
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
	newnode->next=NULL;
	current->next=newnode;
	current=newnode;
	
}
void display()
{
	struct node *temp;
	temp=start->next;
	printf("elements present in queue are\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
void pop()
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





