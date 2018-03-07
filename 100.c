#include<stdio.h>
int main()
{
	int n,rem,result=1;
	printf("\nenter the value:");
	scanf("%d",&n);
            while(n!=0)
            {
            	rem=n%10;
            	result=result*rem;
            	n=n/10;
            }
            printf("\n the  values is..%d",result);
	return 0;
	
}
