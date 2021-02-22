//merging of 2 list in another list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data1,data2,data3;
	struct node *next,*next1,*next2;
}*n1,*n2,*n3,*s1,*s2,*s3,*c1,*c2,*c3;
void create();
void create1();
void insert();
void insert1();
void merge();
void display1();
void display2();
void display3();
main()
{
	int ch;
	create();
	create1();
	while(1)
	{
		printf("\n1-Inserting in 1st list\n2-Inserting in 2nd list\n3-Display data of 1st list\n4-Display data of 2nd list\n5-Merging\n6-Final display after merging\n7-Exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:insert1();
			       break;
			case 3:display1();
			       break;
			case 4:display2();
			       break;
			case 5:merge();
			       break;
			case 6:display3();
			       break;
			case 7:exit(0);
			       break;
		        default:printf("wrong choice\n");
		}
	}
}
void create()
{
	int x;
	printf("enter value for 1st node\n");
	scanf("%d",&x);
	n1=(struct node*)malloc(sizeof(struct node));
	n1->data1=x;
	n1->next=NULL;
	s1=n1;
	c1=n1;
}
void create1()
{
	int x;
	printf("enter value for 1st node\n");
	scanf("%d",&x);
	n2=(struct node*)malloc(sizeof(struct node));
	n2->data2=x;
	n2->next1=NULL;
	s2=n2;
	c2=n2;
}
void insert()
{
	int x;
	printf("enter value for 2nd node\n");
	scanf("%d",&x);
	n1=(struct node*)malloc(sizeof(struct node));
	n1->data1=x;
	n1->next=NULL;
	c1->next=n1;
	c1=n1;
}
void insert1()
{
	int x;
	printf("enter value\n");
	scanf("%d",&x);
	n2=(struct node*)malloc(sizeof(struct node));
	n2->data2=x;
	n2->next1=NULL;
	c2->next1=n2;
	c2=n2;
}
void display1()
{
	struct node *temp;
	temp=s1;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data1);
		temp=temp->next;
	}
	printf("NULL\n");
}
void display2()
{
	struct node *temp;
	temp=s2;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data2);
		temp=temp->next1;
	}
	printf("NULL\n");
}
void merge()
{
	struct node *temp1,*temp2;
	temp1=s1;
	temp2=s2;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=s2;
}

void display3()
{
	struct node *temp;
	temp=s1;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data1);
		temp=temp->next;
	}
	printf("NULL\n");
}
