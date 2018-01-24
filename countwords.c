#include<stdio.h>
void main()
{
char a[10];
int i,count=0;
printf("Enter the string:\n");
gets(a);
for(i=0;a[i]!='\0',i++)
{
if(a[i]=' ')
{
count++;
}
}
printf("No of words in the given string are :%d\n",count+1);
}
