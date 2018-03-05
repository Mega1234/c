#include <stdio.h>

int main() {
	
	int a,b,c,d,e;
	printf("\nenter the 3 values:");
	scanf("%d%d%d",&a,&b,&c);
	d=a*b;
	e=d%c;
	printf("\nthe ans is...%d",e);
	return 0;
}
