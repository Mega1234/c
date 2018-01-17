#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,rem,i;
printf("enter the value");
scanf("%d",&a);
rem=i%10;
i=i/10;
b=b+rem*rem*rem;
if(a==0)
{
printf("it is armstrong");
}
else
{
printf("it is not armstrong");
}
getch();
}
