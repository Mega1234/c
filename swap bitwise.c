#include<stdio.h>
int main()
{
int a,b,t;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("\nbefore swapping\n");
printf("\n%d %d",a,b);
printf("\n after swaping");
t=a;
a=b;
b=t;
printf("\n%d %d",a,b);
return 0;
}
