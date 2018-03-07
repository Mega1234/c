#include<stdio.h>
#include<string.h>
int main(void)

{
char s[100];
gets(s);
int k,i;
k=strlen(s);
for(i=0;i<k;i++)
{
	if(s[i]==' ')
	{
		s[i+1]-=32;
	}
}
s[0]-=32;
printf("%s",s);
	return 0;
}
