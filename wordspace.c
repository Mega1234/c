#include<stdio.h>
int main()
{
char s[20];
int i,l,line=0;
printf("enter the strings:");
scanf("%d",&l);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='.')
line=line+1;
printf("the spaces of the character is",line);
}
}
