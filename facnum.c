#include <stdio.h>
#include <math.h>

int main()
{
    int n,fac=1,i;

    printf("Enter a number: ");
    scanf("%d", &n);
   if(n<0)
   
   	printf("not valid");
   	
   	
   
   else
   {
   for(i=1;i<=n;++i)
    {
fac=fac*i;

}
printf("factorial is:%d",fac);
   	
   }
return(0);
}
       
       
