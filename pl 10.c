#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50],b[50];
	int i,j,x,y,count=0;
	scanf("%s %s",a,b);
	x=strlen(a);
	y=strlen(b);
	if(x==y)
	{
		for(i=0;i<x;i++)
		{
			if(a[i]==b[i])
			{
				count=count;
			}
			else
			{
				count=count+1;
			}
			
		}
		if(count==1)
		{
			printf("\n yes");
		}
		else
		{
			printf("\n no");
		}
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
