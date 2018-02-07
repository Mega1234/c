#include<stdio.h>
void main()
{
char a[100];
int i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
  if((a[i]>='a'||a[i]<='z'||a[i]>='A'||a[i]<='Z')&&(a[i]>=0||a[i]<=9))
  {
    printf("yes");
    break;
  }
}
}
