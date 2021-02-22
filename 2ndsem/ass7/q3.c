//implement double linklist and do all delete operation
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
void delbeg();
void delend();
void delspc();
void delpos();
main()
{
	int ch;
	while(1)
	{
		printf("\n1-Insert\n2-Display from front\n3-Display from back\n4-Delete from beginning\n5-Delete from end\n6-Delete particular data value\n7-Delete from secific position\n8-Exit\n");
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
			case 4:delbeg();
			       break;
			case 5:delend();
			       break;
		        case 6:delspc();
			       break;
			case 7:delpos();
			       break;
		        case 8:exit(0);
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
void delbeg()
{
	int i;
	struct node *temp;
	temp=start->next;
	free(start);
	start=temp;
	start->prev=NULL;
}
void delend()
{
	struct node *temp;
	temp=start;
	while(temp->next!=current)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	free(current);
	current=temp;
}
void delspc()
{
	struct node *temp,*p,*q;
	temp=start;
	p=temp->next;
	q=p->next;
	int val;
	printf("enter data value for deletion\n");
        scanf("%d",&val);
	while(temp->next->data!=val)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
//	free(p);
	q->prev=temp;
}
void delpos()
{
	struct node *temp,*p,*q;
	temp=start;
	p=temp->next;
	q=p->next;
	int pos,i;
	printf("enter position\n");
	scanf("%d",&pos);
	for(i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
//	free(p);
	q->prev=temp;
}
        


	





