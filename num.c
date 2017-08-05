#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the value:");
scanf("%d",&n);
if(n>0)
{
printf("positive number");
}
else if(n<0)
{
printf("ngative number");
}
else
{
printf("zero");
}
getch();
}
