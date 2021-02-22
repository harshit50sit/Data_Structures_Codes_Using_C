//implemention of link list using static represention
#include<stdio.h>
#include<stdlib.h>
#define size 5
struct link
{
	int data;
	int next;
}node[size];
int current=0;
void insert();
void display();
main()
{
	int ch;
	while(1)
	{
		printf("1-creation\n2-display\n3-exit\n");
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
	printf("enter value\n");
	scanf("%d",&x);
	node[current].data=x;
	node[current].next=current+1;
	current++;
}
void display()
{
	int i;
	printf("node:\tdata:\tnext:\n");
	for(i=0;i<current;i++)
	{
		printf("%d\t%d\t%d\t\n",i,node[i].data,node[i].next);
	}
}

