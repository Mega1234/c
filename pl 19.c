#include <stdio.h>

int main(void) 
{
	int a,i,j,flag=1;
	scanf("%d",&a);
	for(j=2;j<=a;j++)
	{
		if(a%j==0)
		{
			flag=1;
			for(i=2;i<=j/2;i++)
			{
			if(j%i==0)
			{
			flag=0;
			break;
			}
			}
		
	
	if(flag==1)
	{
		printf(" the prime factor of sorted order is %d ",j);
	}
		}
	}
	return 0;
}
