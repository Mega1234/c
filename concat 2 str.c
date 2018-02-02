#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int a,b;
	printf("enter the string1:");
	scanf("%s%s",&s1,&s2);
	a=strlen(s1);
	b=strlen(s2);
	if(a>=b)
	{
		printf("%s",s1);
		
	}
	else
	{
		printf("%s",s2);
		
	}
	return 0;
}
