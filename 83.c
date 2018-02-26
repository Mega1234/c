#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\nenter the value of two num:");
	scanf("%d %d",&a,&b);
	c=a/b;
	printf("\nthe division value is:%d",c);
	d=a%b;
	printf("\n the modulo value is:%d",d);
	return 0;
}
