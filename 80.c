#include <stdio.h>

int main()
{
	int n,r,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		r=(r*10)+rem;
		n=n/10;
	}
	n=r;
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
