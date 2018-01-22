#include<conio.h>
int main()
{
 int a[M SIZE];
 printf("Enter  size of array");
 scanf("%d",&size);
 printf("Enter element of array");
 for(i=0;i<size;i++)
 {
   scanf("%d",a[i]);
  }
  m=a[0];
  for(i=1;i<size;i++)
  {
    if (a[i]>m)
    {
      m=a[i];
     }
   }
   printf("maximum element=%d\n",m);
   return 0;
  } 
