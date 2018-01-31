#include<stdio.h>
void main()
{
char s[50];
int l,i,spa=0;
printf("enter the string:");
scanf("%d",&s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==' ')
spa=spa+1;
}
printf("there are %d space in the string",spa);

}
