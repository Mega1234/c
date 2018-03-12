#include<stdio.h>
#include<string.h>
int main()

{
char a[100];
gets(a);
int n,i;
n=strlen(a);
for(i=0;i<n;i++)
{
	if(a[i]==' ')
	{
		a[i+1]-=32;
	}
}
a[0]-=32;
printf("%s",a);
	return 0;
}
