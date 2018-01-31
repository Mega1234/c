#include<stdio.h>
int main
{
char s[20];
int i=0,count=0;
gets(s);
while(s[i]!='\0')  
{
if(s[i]>='0' && s[i]<='9')	
count++;
i++;
}
printf("%d",count);
return 0;
}
