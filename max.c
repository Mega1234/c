#include<stdio.h>
int main()
{
	int s[10],i,maximum=0;
	printf("\n enter the 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<10;i++)
	{
		if(s[i]>maximum)
		{
			maximum=s[i];
		}
	}
	printf("\n maximum of 10 numbers is %d",maximum);
	return 0;
}
