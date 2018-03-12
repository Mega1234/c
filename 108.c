#include <stdio.h>
int main() 
{
	int n,a,b,i,sum=0;
	printf("enter the value\n");
	scanf("%d",&a);
	printf("enter the value\n");
	scanf("%d",&b);
	printf("enter the value\n");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+(a+i*b);
    }
    printf("%d",sum);
	return 0;
}
