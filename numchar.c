#include<stdio.h>
int main
{
char stc[20];
int i=0,count=0;
gets(stc);
while(stc[i]!='\0')  
{
if(stc[i]>='0' && stc[i]<='9')	
count++;
i++;
}
printf("%d",count);
}
