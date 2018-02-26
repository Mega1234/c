#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i,flag=0;
	printf("enter the str:");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[i+1])
		{
			flag=1;
			break;
		}
		if(flag==1)
		{
			printf("\n yes");
		
		}
		else
		{
			printf("\n no");
		}
	}
	return 0;
}
