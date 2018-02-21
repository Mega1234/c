#include <stdio.h>
int main()
{
  int a,b,p,sq;
  scanf("\n%d \n%d",&a,&b);
  p=a*b;
  sq=p*p;
  if(sq/p==p)
  {
  	printf("\n yes");
  
  }
  else
  {
  	printf("\n no");
  }
  return 0;
}
  
  
