#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter a value\n");
scanf("%d",&a);
b=a/100;
c=a%100;
printf("%d ",b);
b=c/10;
d=c%10;
printf("%d %d",b,d);
return 0;
}
