#include <stdio.h>

int main()
{
	int i,n,k,ar[20];
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=1;i<=n;i++)
	{
		while(i==k)
		{
			printf("\n%d",ar[i]);
			break;
		}
	}
	return 0;
}
