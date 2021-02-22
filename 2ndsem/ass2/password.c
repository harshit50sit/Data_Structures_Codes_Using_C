//making password
#include<stdio.h>
main()
{
	char pass[]={'h','a','r','s','h','i','t','\0'},str[100],i=0,j=0,c;
	printf("enter password not more than 3 times\n");
	for(i=0;i<3;i++)
	{
		scanf("%s",str);
		while(pass[j]!='\0')
		{
			if(pass[j]!=str[j])
			{
				c=1;
			}
			j++;
		}
		if(c!=1)
		{
			if(str[j]=='\0')
			{
				printf("Welcome Harshit\n");
				break;
			}
			else
			{
				printf("please re enter password\n");
				
			}
		}
		else
		{
			printf("please re enter password\n");
		//	scanf("%s",str);
		}
	}
}

	
