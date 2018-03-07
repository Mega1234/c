#include<stdio.h>
int main()
{
	int n,rem,value=1;
	printf("\nenter the value:");
	scanf("%d",&n);
            while(n!=0)
            {
            	rem=n%10;
            	value=value*rem;
            	n=n/10;
            }
            printf("\n the  values is..%d",value);
	return 0;
	
}
