#include<stdio.h>
int main()
{
	int a,i,s=0;
	printf("\nenter the number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		s=s+i;
		
	}
	printf("the sum of value is:%d",s);
	return 0;
}
