#include<stdio.h>
#include<conio.h>
int main()
{
int n,rev;
printf("enter the value");
scanf("%d",&n);
while(n!=0)
{
n*rev;
n/rev;
n/=10;
}
if(n==rev)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
