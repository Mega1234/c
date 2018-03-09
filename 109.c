#include<stdio.h>
int main()
{
  int min,size,i,s[50];
  printf("\nenter the size :");
  scanf("%d",&size);
  printf("\nenter the numbers:");
  for(i=0;i<size;++i)
  {
    scanf("%d",&s[i]);
  }
   min=s[0];
  for(i=0;i<size;++i)
  {
    if(s[i]<min)
    {
      min=s[i];
      
    }
 }
printf("\nthe min val is:%d",min);
return 0;
}
