#include <stdio.h>
 
int main() 
{
	int n,sum=0,square,rem;
	printf("enter the value:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		square=rem*rem;
		sum=sum+square;
		n=n/10;
	}
	printf("\n%d",sum);
	return 0;
}
