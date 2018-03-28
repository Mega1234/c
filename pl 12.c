#include<stdio.h>
int main()
{
 int a[50],j,i,s,x,temp;
 printf("\n enter  value:");
	scanf("%d",&x);
	printf("\n enter  value:");
	scanf("%d",&s);
	for(i=0;i<x;i++)
	{
	scanf("%d",&a[i]);
	}
	for(j=0;j<s;j++)
	{
			temp=a[x-1];
	for(i=x-2 ;i>=0;i--)
	{
		a[i+1]=a[i];	
	}
	a[0]=temp;
}
	for(i=0;i<x;i++)
	{
	printf("%d\t",a[i]);
}
return 0;
}
