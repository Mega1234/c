#include<stdio.h>
#include<string.h>
int main()
{
char a[100],t,i;
fgets(a,100,stdin);
if (a[0] >= 'a' && a[0] <= 'z') {
         a[0] = a[0] - 32;
      }
for(i=1;i<strlen(a);i++)
{
if(a[i]==' ')
{
  if (a[i+1] >= 'a' && a[i+1] <= 'z') {
         a[i+1] = a[i+1] - 32;
      }
}
}
printf("%s",a);
return 0;
}
