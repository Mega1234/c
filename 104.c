#include<stdio.h>
int main()
{
	int a,b,i,sum=1;
	printf("\nenter the two values:");
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++)
	{
	sum=sum*a;	
	}
	printf("\nthe number is:%d",sum);
	return 0;
}
