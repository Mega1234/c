#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("enter the number:");
	scanf("%d",&a);
	printf("\n enter the another number:");
	scanf("%d",&b);
	c=a+b;
	printf("\n the difference are %d",c);
	if(c%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
	return 0;
}
