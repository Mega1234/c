#include<stdio.h>
int main()
{
	int m,n,r;
	printf("enter the number");
	scanf("%d",&m);
	printf("enter the number");
	scanf("%d",&n);
	r=m+n;
	printf("the sum is:%d",r);
	if(r%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
	return 0;
}
