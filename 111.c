#include <stdio.h>

int main(void) 

{

	int n,count=0;

	printf("enter the number");

	scanf("%d",&n);

	while(n!=0)

	{

		n=n/10;

		count++;

	}

	printf("\n%d",count);

	return 0;

}
