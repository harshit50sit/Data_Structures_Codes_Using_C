//implementation of circular queue
#include<stdio.h>
#include<stdlib.h>
int maxsize=5;
int queue[20];
int front=0;
int rear=-1;
void insert();
void delete();
void display();
main()
{
	int ch;
	while(1)
	{
		printf("\n1-insertion\n2-deletion\n3-display\n4-exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:delete();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			       break;
			default:printf("wrong choice\n");
		}
	}
}
void insert()
{
	int val;
	if((front==0 && rear==maxsize-1)||(front>0 && rear==front-1))
	{
		printf("queue is full\n");
		return;
	}
	else
	{
		if(rear==maxsize-1 && front>0)
		{
			rear=0;
			printf("enter element\n");
			scanf("%d",&val);
			queue[rear]=val;
		}
		else
		{
			if((front==0 && rear==-1)||(rear!=front-1))
			{
				rear++;
				printf("enter value\n");
				scanf("%d",&val);
				queue[rear]=val;
			}
		}
	}
}
void delete()
{
	int y;
	if(front==0 && rear==-1)
	{
		printf("queue is empty\n");
		
	}
	else if(front==rear)
	{
		rear=-1;
		front=0;
	}
	else
	{
		if(front==maxsize-1)
		{
			front=0;
		}
		else
		{
			y=queue[front];
			front++;
			printf("deleted elment is %d\n",y);
			display();
		}
	}
}
void display()
{
	int i,j;
	if(front==0 && rear==-1)
	{
		printf("no element in stack\n");
	}
	else if(front>rear)
	{
		for(i=0;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
		for(j=front;j<=maxsize-1;j++)
		{
			printf("%d\t",queue[j]);
		}
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
