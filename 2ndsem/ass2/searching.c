//count no of elements found in a string
#include<stdio.h>
void count(char[],char);
main()
{
	char str[40],ch;
	printf("enter string\n");
	scanf("%s",str);
	printf("enter elements which you want to count from a string\n");
	scanf(" %c",&ch);
	count(str,ch);
}
void count(char str[],char ch)
{
	int i=0,c=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			c++;
		}
	}
	if(c>0)
	{
		printf("element is found %d times\n",c);
	}
	else
	{
		printf("elements not found\n");
	}
}


			

