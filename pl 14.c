#include <stdio.h>
#include<string.h>
int main() 
{
	char s[30];
	int i,a;
	scanf("%s",s);
	a=strlen(s);
	for(i=0;i<a;i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
		{
			s[i]='+';
		}
	}
	for(i=n;i>=0;i--)
	{
		if(s[i]!='+')
		{
			printf("%c",s[i]);
		}
	}
 
	return 0;
}
