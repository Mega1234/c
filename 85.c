#include<stdio.h>
int main()
{
	char a[20];
	int i,b;
	printf("enter the string:");
	scanf("%s",&a);
	b=strlen(a);
	for(i=0;i<b;i=i+2)
	{
		printf(" %c",a[i]);
	}
	for(i=1;i<b;i=i+2)
	{
		printf("%c",a[i]);
	}
	return 0;
}
