#include<stdio.h>
int main()
{
	int a,count=0;
	printf("enter the num:");
	scanf("%d",&a);
	if(a!=0)
	{
		a=a/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
