#include<stdio.h>
int main()
{
	int i,m,k,ar[20],t;
	printf("enter the two values:");
	scanf("%d%d",&m,&k);
	for(i=0;i<m;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<m;i++)
	{
		if(ar[i]>ar[i+1])
		{
			t=ar[i];
			ar[i]=ar[i+1];
			ar[i+1]=t;
		}
	}
	for(i=0;i<m;i++)
	{
		if(i==k-1)
		printf("\nthe ans is:%d",ar[i]);
	}
}
