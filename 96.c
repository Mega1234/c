#include <stdio.h>

int main()
{
	int x,i,flag;
	printf("enter the number:");
	scanf("%d",&x);
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			flag=1;
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
