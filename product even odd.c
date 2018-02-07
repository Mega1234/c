#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the number:");
	scanf("%d",&b);
	c=a*b;
	printf("the number:%d",c);
	if(c%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
