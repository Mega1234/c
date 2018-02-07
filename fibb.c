#include<stdio.h>
int main()
{
	int s=0,y=1,z,n,i;
	printf("\n enter the number of terms");
	scanf("%d",&n);
	printf("\n the fibonacci series is");
	for(i=0;i<n;i++)
	{
	printf("\n%d",s);
	z=s+y;
	s=y;
	y=z;
	}
	return 0;
}
