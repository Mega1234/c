#include <stdio.h>

int main(void) 
{
	int n,rem,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	n=rev;
	while(n!=0)
	{
		rem=n%10;
		if(rem%2==1)
		{
		printf("%d ",rem);
		}
		n=n/10;
	}
	return 0;

}
