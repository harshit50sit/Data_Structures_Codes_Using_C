//using link list reverse the data
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*current,*start,*newnode;
void create();
void insertend();
void display();
void reverse();
main()
{
	int ch;
	create();
	while(1)
	{
		printf("\n1-insert at end\n2-display\n3-reverse\n4-exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insertend();
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
void create()
{
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter 1st value of node\n");
	scanf("%d",&x);
	newnode->data=x;
	newnode->next=NULL;
	current=newnode;
	start=newnode;
}
void display()
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
void insertend()
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
void reverse()
{
	int i,temp,c=0;
	struct node *beg,*end,*ptr,*p;
	p=start;
	beg=start;
	end=current;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	for(i=0;i<c/2;i++)
	{
		ptr=start;
		while(ptr->next!=end)
		{
			ptr=ptr->next;
		}
		temp=beg->data;
		beg->data=end->data;
		end->data=temp;
		end=ptr;
		beg=beg->next;
	}

}


		

