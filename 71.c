#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,b,flag=0;
	printf("enter the string");
	scanf("%c",&str);
	b=strlen(str)
	for(i=0;i<b;i++)
	{
	if(str!=str[b-i-1)
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
		printf("\n yes");
	}
	
	else
	{
		printf("\n no");
	}
	return 0;
}
