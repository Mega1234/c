#include<stdio.h>
int main()
{
int a,b,t;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("\nbefore swapping\n");
printf("\na=%d and b=%d",a,b);
printf("\n after swaping");
t=a;
a=b;
b=t;
printf("\na=%d and b=%d",a,b);
return 0;
}
