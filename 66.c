#include<stdio.h>
int main()
{
	int a,i,flag=0;
	printf("enter the number");
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
		if(flag==0)
		{
			printf("\n prime");
		}
		else
		{
			printf("\n not prime");
		}
	
	return 0;
}
		
	
