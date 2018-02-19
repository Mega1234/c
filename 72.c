#include<stdio.h>
#include<string.h>
int main()
{
int i,var,flag=0;
char str1[50];
printf("enter the str:");
scanf("%s",&str1);
var=strlen(str1);
for(i=0;i<var;i++)
{
if(str1=='a'||str1=='e'||str1=='i'||str1=='o'||str1=='u')
{
flag=1;
}

}
if(flag==1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}
