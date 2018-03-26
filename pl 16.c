#include <stdio.h>

int main() 
{
	int N,i,j;
	int a[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		int count=0;
		for(j=0;j<N;j++)
		{
			if(a[i]==a[j] && i!=j )
			{
				count=count+1;	
			}
			
		}
	if(count==0)
	{
		printf("%d",a[i]);
	}
	}

	
	
	return 0;
}
