#include<stdio.h>
#include<string.h>
int top=-1;
char stack[50];
void push(char);
int precidence(char []);
main()
{
	char p[50],q[50];
	printf("Enter infix operation\n");
	int i,j,c=0,l,pr;
	scanf("%s",q);
	l=strlen(q);
	printf("length=%d\n",l);
	q[l]=')';
	q[l+1]='\0';
	printf("%s",q);
	pr=precidence(q);
	stack[0]='(';
	for(i=0;q[i]!='\0';i++)
	{
		if((q[i]>=65)&&(q[i]<=97))
		{
			push(q[i]);
		//	show();
		}
		else if(q[i]==('+'||'-'||'*'||'/'||'^'))
		{
			if(pr>2&&pr<=3)
			{
				
				push(q[i]);
			}
			else if(pr=0)
			{
				push(q[i]);
			}
			else
			{
				push(q[i]);
			}
		}
	
				
		

		
	}

}
int precidence(char q[])
{
	int i=0;
	while(q[i]!='\0')
	{
	if(q[i]==(('+')||('-')))
	{
		return 1;
	}
	else if(q[i]==(('*')||('/')))
	{
		return 2;
	}
	else if(q[i]=='^')
	{
		return 3;
	}
	else
	{
		return 0;
	}
	i++;
	}
}
void push(char ch)
{
	char stack[50];
	top=top+1;
	top++;
	stack[top]=ch;

}

	
	





