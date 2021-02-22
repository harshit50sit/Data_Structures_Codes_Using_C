//length of a string
#include<stdio.h>
main()
{
	char str[100];
	int i=0;
	printf("enter string\n");
	scanf("%[^\n]s",str);
	while(str[i]!='\0')
	{
		i++;
	}
	printf("length=%d\n",i);
}


