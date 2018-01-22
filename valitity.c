#include<stdio.h>
#include<conio.h>
void main()
{
char str[30];
int i,flag=0,n=0;
printf("Enter the string");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='0'|| str[i]=='1'|| str[i]=='3'|| str[i]=='5'|| str[i]=='7'|| str[i]=='8'|| str[i]=='9')
{
flag+flag+1;
}
}
if(flag==0)
{
printf("the given string not contain number");
}
else
{
printf("the string contain number");
}
getch();
}
