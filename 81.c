#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of two num:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("\n %d",a-b);
	}
	else
	{
		printf("\n %d",b-a);
	}
	return 0;
}
