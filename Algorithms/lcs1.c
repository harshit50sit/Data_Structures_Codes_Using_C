#include<stdio.h>
#include<string.h>
#include<stdio.h>
int i,j,m,n,c[20][20],b[20][20];
char x[50],y[50];
void PRINT_LCS()
{
	int k,o;
	if(i==0||j==0)
	{
		return;
	}
//	if(x[i]==y[j])
//	{
		printf("%c",x[i]);
//	}
	
}
void LCS_LENGTH(char x[],char y[])
{
	m=strlen(x);
	n=strlen(y);
	for(i=0;i<=m;i++)
	{
		c[i][0]=0;
	}
	for(j=0;j<=n;j++)
	{
		c[0][j]=0;
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
			{

				c[i][j]=c[i-1][j-1]+1;
				PRINT_LCS();

			        b[i][j]='d';
			}
			else if(c[i-1][j]>=c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				b[i][j]='e';
			}
			else
			{
				c[i][j]=c[i][j-1];
				b[i][j]='f';

			}
		//	printf("%c",x[i-1]);
		}
	//	printf("%c",x[i-2]);
	}
//	printf("%c",x[i-1]);
}

main()
{
	//      char x[50],y[50];
	printf("Enter the First sequence:");
	scanf("%s",x);
	printf("Enter the 2nd sequence:");
	scanf("%s",y);
	LCS_LENGTH(x,y);
       // PRINT_LCS(m,n);
	printf("\nLength of lcs:%d\n",c[m][n]);
	printf("\n");
}

