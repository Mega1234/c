#include <stdio.h>

int main()
{
	int n,a[50],i,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];	
	}
	printf("\n%d",sum);
	return 0;
}
