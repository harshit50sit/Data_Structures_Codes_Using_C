//implement double linklist and traverse it from both sides
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next,*prev;
}*start=NULL,*current=NULL,*newnode;
void insert();
void display1();
void display2();
main()
{
	int ch;
	while(1)
	{
		printf("\n1-Insert\n2-Display from front\n3-Display from back\n4-Exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
        	        	break;
			case 2:display1();
			       break;
			case 3:display2();
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
void display2()
{
	struct node *ptr;
	ptr=current;
	while(ptr!=start->prev)
	{
		printf("<--%d",ptr->data);
		ptr=ptr->prev;
	}
}


