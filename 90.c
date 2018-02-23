#include<stdio.h>
int main()
{
	char a[20];
	int i,n;
	printf("enter the alphanumeric: ");
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			printf("\n %c",a[i]);
		}
	}
	return 0;
}
