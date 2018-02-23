#include<string.h>
int main()
{
	char a[20],b;
	printf("enter the str:");
	scanf("%s",&a);
	b=strlen(a);
	if(b%2==0)
	{
	a[b/2]='*';
	a[b/2-1]='*';
	}
	else
	{
		a[b/2]='*';
	}
	printf("\n %s",a);
	return 0;
}
