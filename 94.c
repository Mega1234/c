#include <stdio.h>

int main()
{
	int i,n,k,arr[20];
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		while(i==k)
		{
			printf("\n%d",arr[i]);
			break;
		}
	}
	return 0;
}
