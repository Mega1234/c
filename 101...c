#include<stdio.h>
#include<string.h>
int main()
{
	char st[20];
	int i,l,a;
	printf("\n enter the string");
	scanf("%s",&st);
	printf("\n enter the number:\n");
	scanf("%d",&a);
	l=strlen(st);
	for(i=a;i<=l;i++)
	{
		printf("%c",st[i]);
	}
	return 0;
}
