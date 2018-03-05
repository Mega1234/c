#include<stdio.h>
 int main()
{
int a[25],i,j,s,temp;
printf("\n Enter the number..:");
scanf("%d",&s);
printf("\n Enter the elements..:");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
 }
  }
    
}

   printf("\n Lexicographical  is...");
  for(i=0;i<s;i++){
    printf("%d\t",a[i]);
}
return 0;
}
