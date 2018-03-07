#include<stdio.h>
int main()
{
	int n,rev,rem;
	printf("\nenter the  value:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("\n the kelvin id:%d",rev);
	return 0;
	
}
