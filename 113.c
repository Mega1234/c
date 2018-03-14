#include<stdio.h>
int main()
{
int ar[50],a,b,i,count=0;
scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<a;i++)
{
if(ar[i]==b)
{
count++;
}
}
printf("%d time",count);
}
