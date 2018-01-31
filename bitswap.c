#include<stdio.h>
int main()
{
int a,b,tem;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("\nbefore swapping\n");
printf("\na=%d and b=%d",a,b);
printf("\n after swaping");
tem=a;
a=b;
b=tem;
printf("\na=%d and b=%d",a,b);
return 0;
}
