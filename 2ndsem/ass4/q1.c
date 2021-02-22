//implement the stack
#include<stdio.h>
#include<stdlib.h>
int size=5;
int stack[20];
int top=-1;
void push();
void pop();
void display();
main()
{
	int ch;
	while(1)
	{
		printf("1-push\n2-pop\n3-display\n4-exit\n");
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
			       break;
			default:printf("wrong choice\n");
		}
	}
}
void push()
{
	int val;
	if(top==size)
	{
		printf("stack is full\n");
		return;
	}
	else
	{
		printf("enter the element\n");
		scanf("%d",&val);
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty\n");
		return;
	}
	else
	{
		int y;
		y=stack[top];
		top--;
		printf("\ndeleted elements is %d\n",y);
		display();
	}
}
void display()
{
	int i;
	printf("\nelements present in stack are\n");
	if(top==-1)
	{
		printf("no elements in stack\n");
	}
	else
	{
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
	}

}
