#include <stdio.h>

int main(void) 
{
	int a,b,i,j,count=0,result=1;
	scanf("%d",&a);
	scanf(" %d",&b);
	if(a==2)
	{
		count++;
	}
	for(i=1;i<=b;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				result=0;
				break;
				
			}
			
		}
			if(result==1)
			{
				count=count+1;
			}
		
		
	}

	printf("\n%d",count);
	return 0;
}
