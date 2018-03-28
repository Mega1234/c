#include <stdio.h>

int main(void) 
{
	int a,b,flag,i;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		flag=a;
	}
	else
	{
		flag=b;
	}
	for(i=2;i<=flag;i++)
	{
		if((i%a==0) && (i%b==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
