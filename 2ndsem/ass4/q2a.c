//decimal to binary
#include<stdio.h>
int size=10;
int stack[20];
int top=-1;
void push(int);
void pop();
main()
{
	int no,res;
	printf("enter decimal number\n");
	scanf("%d",&no);
	while(no>0)
	{
		res=no%2;
		push(res);
		no=no/2;
	}
	pop();
}
void push(int res)
{
	if(top==size)
	{
		printf("stack is full\n");
		
	}
	else
	{

			top++;
			stack[top]=res;
		
	}
}
void pop()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty\n");
	
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
		
	}
}



