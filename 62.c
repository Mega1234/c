#include <stdio.h>

#include<string.h>

int main(void)

{
	char a[10];
	scanf("%s",a);
	int i,flag=0,b;
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]=='1' || a[i]=='0')
		{
			flag=1;
		}

		else

		{

			flag=0;

			break;

		}
	}
	if(flag==1)
	{
			printf("yes");
	}
	else
	{
		printf("no");
	}
	}
