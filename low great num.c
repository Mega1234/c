#include<stdio.h>
int main()
{
	int n,num[100],i,l,h;
	printf("\n enter the N value");
	scanf("%d",&n);
	printf("\n enter the N numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	l=num[0];
	h=num[0];
	for(i=1;i<n;i++)
	{
		if(l>num[i])
		{
			l=num[i];

		}
	}
	for(i=1;i<n;i++)
	{
		if(h<num[i])
		{
			h=num[i];
		}
	}
	printf("\n lowest is %d",l);
		printf("\n greatest is %d",h);
	return 0;
	
}
