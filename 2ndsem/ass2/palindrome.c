//palindrome of string
#include<stdio.h>
main()
{
	char str[100];
	printf("enter string\n");
	scanf("%[^\n]s",str);
	int i=0,j=0,c=0;
	while(str[j]!='\0')
	{
		j++;
	}
	j--;
	while(i<j)
	{
		if(str[i]!=str[j])
		{
			printf("not palindrome\n");
			break;
		}
		else
		{
			c++;
		}
		i++;
		j--;
	}
	if(c>0)
	{
		printf("palindrome\n");
	}

}
