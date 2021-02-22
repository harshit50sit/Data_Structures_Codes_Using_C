//concatinate the string
#include<stdio.h>
main ()
{
	char str1[100],str2[100];
	int i=0,j=0;
	printf("enter two string\n");
	scanf("%s%s",str1,str2);
	while(str1[j]!='\0')
	{
		j++;
	}
	while(str2[i]!='\0')
	{
		str1[j]=str2[i];
		i++;
		j++;
	}
	str1[j]='\0';
	printf("%s",str1);
}
