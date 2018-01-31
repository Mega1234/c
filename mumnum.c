#include<stdio.h>
int main()
{
	int a[10],i,max=0;
	printf("\n enter the 10 numbers");
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n maximum of 10 numbers is %d",max);
	return 0;
}
