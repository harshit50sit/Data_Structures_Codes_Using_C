//implement the stack and reverse a string
#include<stdio.h>
#include<stdlib.h>
int size=10;
int i;
char str[50];
char stack[20];
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
	
	if(top==size)
	{
		printf("stack is full\n");
		return;
	}
	else
	{
		printf("enter the string\n");
		scanf("%s",str);
		for(i=0;str[i]!='\0';i++)
		{
			top++;
			stack[top]=str[i];
			
		}
		
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
		int j=0;
		char y;
		while(j<i)
		{
		y=stack[top];
		top--;
		printf("\ndeleted charcter is %c\n",y);
		display();
		j++;
		}
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
		printf("%c\n",stack[i]);
	}
	}

}
