#include<stdio.h>
int main()
{
	int a,i,fact=1;
	printf("enter the value:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("\n the fact value is %d",fact);
	
}
