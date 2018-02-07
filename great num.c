#include<stdio.h>
int main()
{
	int s[10],i,max=0;
	printf("\n enter the 10 numbers");
	for(i=0;i<9;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<9;i++)
	{
		if(s[i]>max)
		{
			max=s[i];
		}
	}
	printf("\n maximum  numbers is %d",max);
	return 0;
}
