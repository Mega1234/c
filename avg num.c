#include<stdio.h>
int main()
{
int i,n,a[20];
float avg;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",a[i]);
}
avg=n/2;
printf("%d",a[avg]);
return 0;
}
