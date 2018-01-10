#include<stdio.h>
void main()
{
long long n;
int count=0;
printf("enter the num");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
getch();
}
