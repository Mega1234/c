#include<stdio.h>
int main()
{
	int a,b,x;
	printf("\n enter the two values ");
	scanf("%d%d",&a,&b);
	x=(a<b)?a:b;
	while(1)
	{
		if(x%a==0&&x%a==0)
		{
			printf("\n%d",x);
			break;
		}
		x++;
	}
	return 0;
}
