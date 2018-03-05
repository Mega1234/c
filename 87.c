#include<stdio.h>
int main()
{
	int a,b,c,gcd;
	printf("\n enter the two values ");
	scanf("%d%d",&a,&b);
	do
	{
		c=a%b;
		if(c==0)
		break;
		a=b;
		b=c;
	}while(c!=0);
	gcd=b;
	printf("%d",gcd);
	return 0;
}
	
