//implementation of queue
#include<stdio.h>
#include<stdlib.h>
int maxsize=10;
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
	if(rear==maxsize)
	{
		printf("queue is full\n");
		return;
	}
	else
	{
		printf("enter element\n");
		scanf("%d",&val);
		rear++;
		queue[rear]=val;
	}
}
void delete()
{
	int res;
	if(rear==-1)
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
		res=queue[front];
		front++;
		printf("deleted element is %d\n",res);
		display();
	}
}
void display()
{
	int i;
	printf("elemnts in queue are\n");
	if(front>rear)
	{
		printf("no elements in queue\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
