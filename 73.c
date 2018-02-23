#include<stdio.h>
int main()
{
	int a,l,r;
	printf("enter the number:");
	scanf("%d",&a);
	printf("\n enter the num:");
	scanf("%d",&l);
	printf("\n enter the num:");
	scanf("%d",&r);
	if(a>l&&a<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
