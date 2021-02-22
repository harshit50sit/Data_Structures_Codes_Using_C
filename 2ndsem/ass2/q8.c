//extract a substring from a string
#include<stdio.h>
void extract(char[],char[],int,int);
main()
{
	char str[50],substr[50];
	int pos,size;
	printf("enter main string\n");
	scanf("%s",str);
	printf("enter positon from where you want to extract the string from main string\n");
	scanf("%d",&pos);
	printf("enter how many elemnts you want to extract\n");
	scanf("%d",&size);
	extract(str,substr,pos,size);
//	printf("extracted strinf\n%s\n",substr);
}
void extract(char str[],char substr[],int pos,int size)
{
	int i=0;
	while(i<size)
	{
		substr[i]=str[pos-1];
		pos++;
		i++;
	}
	substr[i]='\0';
	printf("extracted string\n%s\n",substr);
}

