#include <stdio.h>

int main(void) {
	int a,rev=0,s;
	scanf("%d",&a);
	while(a>0)
	{
		s=a%10;
		rev=rev*10+s;
		a=a/10;
	}
	printf("%d",rev);
	return 0;
}
